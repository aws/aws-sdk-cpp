import os
import json
from botocore.vendored import requests

CHIME_BOT_URL = os.environ['CHIME_BOT_URL']
TREBUCHET_RELEASE_PIPELINE_NAME = os.environ['TREBUCHET_RELEASE_PIPELINE_NAME']
SOURCE_STAGE_NAME = os.environ['SOURCE_STAGE_NAME']
PROD_STAGE_NAME = os.environ['PROD_STAGE_NAME']

def lambda_handler(event, context):
    print('Received Event: ' + json.dumps(event))

    message = json.loads(event['Records'][0]['Sns']['Message'])
    pipeline = message['detail']['pipeline']
    stage = message['detail']['stage']
    state = message['detail']['state']

    if (state == 'SUCCEEDED' and pipeline == TREBUCHET_RELEASE_PIPELINE_NAME and (stage == SOURCE_STAGE_NAME or stage == PROD_STAGE_NAME)) or (state == 'FAILED'):
        headers = {'Content-Type': 'application/json'}
        data = {}
        data['Content'] = '/md {mentionAll}\nPipeline: {pipeline}\nStage: {stage}\nState: {state}'.format(
            mentionAll = '@All' if state == 'FAILED' else '',
            pipeline = pipeline,
            stage = stage,
            state = state)
        print('[Chime] Sending message to Chime Bot: ' + json.dumps(data['Content']))
        respone = requests.post(CHIME_BOT_URL, headers = headers, data = json.dumps(data))
        print('Response:', end=' ')
        print(respone)
