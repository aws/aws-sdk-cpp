import os
import json
import boto3
import argparse

UPDATE_STATUS_LAMBDA_FUNCTION_NAME = os.environ['UPDATE_STATUS_LAMBDA_FUNCTION_NAME']
lambdaClient = boto3.client('lambda', region_name = os.environ['AWS_REGION'])

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('-s', '--stage_name', default = 'Unknown')
    parser.add_argument('-e', '--internal_message', default = '')
    parser.add_argument('-i', '--release_id', default = '')
    parser.add_argument('-m', '--status_message', default = '')
    parser.add_argument('-b', '--build_succeeding', default = '0')
    parser.add_argument('-o', '--internal_only', action = 'store_true')
    parser.add_argument('-c', '--release_complete', action = 'store_true')
    args = parser.parse_args()

    updateStatus({
        'stageName': args.stage_name,
        'internalMessage': args.internal_message,
        'internalOnly': args.internal_only,
        'messageToTrebuchet': {
            'releaseId' : args.release_id,
            'language' : 'CPP',
            'releaseState' : 'Success' if args.release_complete else ('InProgress' if args.build_succeeding == '1' else 'Blocked'),
            'statusMessage' : args.status_message
        }
    })

def updateStatus(updateStatusMessage):
    print('[Lambda] Triggering Lambda function to update status:', end = ' ')
    print(updateStatusMessage)
    response = lambdaClient.invoke(
        FunctionName = UPDATE_STATUS_LAMBDA_FUNCTION_NAME,
        InvocationType = 'RequestResponse',
        Payload = json.dumps(updateStatusMessage)
    )
    print('Response:', end = ' ')
    print(response)
    if response['ResponseMetadata']['HTTPStatusCode'] != 200:
        quit(1)

main()