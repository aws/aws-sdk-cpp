﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/PhysicalIdentifierType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a physical resource identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PhysicalResourceId">AWS
   * API Reference</a></p>
   */
  class PhysicalResourceId
  {
  public:
    AWS_RESILIENCEHUB_API PhysicalResourceId();
    AWS_RESILIENCEHUB_API PhysicalResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API PhysicalResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline PhysicalResourceId& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline PhysicalResourceId& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline PhysicalResourceId& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that the physical resource is located in.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline PhysicalResourceId& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline PhysicalResourceId& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline PhysicalResourceId& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the physical resource.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline PhysicalResourceId& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline PhysicalResourceId& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline PhysicalResourceId& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of physical resource identifier.</p> <dl> <dt>Arn</dt>
     * <dd> <p>The resource identifier is an Amazon Resource Name (ARN) and it can
     * identify the following list of resources:</p> <ul> <li> <p>
     * <code>AWS::ECS::Service</code> </p> </li> <li> <p>
     * <code>AWS::EFS::FileSystem</code> </p> </li> <li> <p>
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::SNS::Topic</code> </p> </li> </ul> </dd> <dt>Native</dt> <dd> <p>The
     * resource identifier is an Resilience Hub-native identifier and it can identify
     * the following list of resources:</p> <ul> <li> <p>
     * <code>AWS::ApiGateway::RestApi</code> </p> </li> <li> <p>
     * <code>AWS::ApiGatewayV2::Api</code> </p> </li> <li> <p>
     * <code>AWS::AutoScaling::AutoScalingGroup</code> </p> </li> <li> <p>
     * <code>AWS::DocDB::DBCluster</code> </p> </li> <li> <p>
     * <code>AWS::DocDB::DBGlobalCluster</code> </p> </li> <li> <p>
     * <code>AWS::DocDB::DBInstance</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::GlobalTable</code> </p> </li> <li> <p>
     * <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::EC2::EC2Fleet</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Instance</code> </p> </li> <li> <p>
     * <code>AWS::EC2::NatGateway</code> </p> </li> <li> <p>
     * <code>AWS::EC2::Volume</code> </p> </li> <li> <p>
     * <code>AWS::ElasticLoadBalancing::LoadBalancer</code> </p> </li> <li> <p>
     * <code>AWS::RDS::DBCluster</code> </p> </li> <li> <p>
     * <code>AWS::RDS::DBInstance</code> </p> </li> <li> <p>
     * <code>AWS::RDS::GlobalCluster</code> </p> </li> <li> <p>
     * <code>AWS::Route53::RecordSet</code> </p> </li> <li> <p>
     * <code>AWS::S3::Bucket</code> </p> </li> <li> <p> <code>AWS::SQS::Queue</code>
     * </p> </li> </ul> </dd> </dl>
     */
    inline const PhysicalIdentifierType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PhysicalIdentifierType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PhysicalIdentifierType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PhysicalResourceId& WithType(const PhysicalIdentifierType& value) { SetType(value); return *this;}
    inline PhysicalResourceId& WithType(PhysicalIdentifierType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    PhysicalIdentifierType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
