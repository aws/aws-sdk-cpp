/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class DescribeIpRestrictionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeIpRestrictionResult();
    AWS_QUICKSIGHT_API DescribeIpRestrictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeIpRestrictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline DescribeIpRestrictionResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline DescribeIpRestrictionResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline DescribeIpRestrictionResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIpRestrictionRuleMap() const{ return m_ipRestrictionRuleMap; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline void SetIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_ipRestrictionRuleMap = value; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline void SetIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_ipRestrictionRuleMap = std::move(value); }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& WithIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetIpRestrictionRuleMap(value); return *this;}

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& WithIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetIpRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_ipRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_ipRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const char* key, Aws::String&& value) { m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(Aws::String&& key, const char* value) { m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline DescribeIpRestrictionResult& AddIpRestrictionRuleMap(const char* key, const char* value) { m_ipRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcIdRestrictionRuleMap() const{ return m_vpcIdRestrictionRuleMap; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline void SetVpcIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_vpcIdRestrictionRuleMap = value; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline void SetVpcIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_vpcIdRestrictionRuleMap = std::move(value); }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& WithVpcIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetVpcIdRestrictionRuleMap(value); return *this;}

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& WithVpcIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetVpcIdRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_vpcIdRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_vpcIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_vpcIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_vpcIdRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(const char* key, Aws::String&& value) { m_vpcIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(Aws::String&& key, const char* value) { m_vpcIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(const char* key, const char* value) { m_vpcIdRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcEndpointIdRestrictionRuleMap() const{ return m_vpcEndpointIdRestrictionRuleMap; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline void SetVpcEndpointIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_vpcEndpointIdRestrictionRuleMap = value; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline void SetVpcEndpointIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_vpcEndpointIdRestrictionRuleMap = std::move(value); }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& WithVpcEndpointIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetVpcEndpointIdRestrictionRuleMap(value); return *this;}

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& WithVpcEndpointIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetVpcEndpointIdRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_vpcEndpointIdRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_vpcEndpointIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_vpcEndpointIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_vpcEndpointIdRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(const char* key, Aws::String&& value) { m_vpcEndpointIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(Aws::String&& key, const char* value) { m_vpcEndpointIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(const char* key, const char* value) { m_vpcEndpointIdRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline DescribeIpRestrictionResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeIpRestrictionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeIpRestrictionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeIpRestrictionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request. </p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request. </p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request. </p>
     */
    inline DescribeIpRestrictionResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_awsAccountId;

    Aws::Map<Aws::String, Aws::String> m_ipRestrictionRuleMap;

    Aws::Map<Aws::String, Aws::String> m_vpcIdRestrictionRuleMap;

    Aws::Map<Aws::String, Aws::String> m_vpcEndpointIdRestrictionRuleMap;

    bool m_enabled;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
