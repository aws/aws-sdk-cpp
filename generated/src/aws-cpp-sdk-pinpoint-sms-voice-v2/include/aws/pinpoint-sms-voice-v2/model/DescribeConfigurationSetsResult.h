/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetInformation.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DescribeConfigurationSetsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline const Aws::Vector<ConfigurationSetInformation>& GetConfigurationSets() const{ return m_configurationSets; }

    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline void SetConfigurationSets(const Aws::Vector<ConfigurationSetInformation>& value) { m_configurationSets = value; }

    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline void SetConfigurationSets(Aws::Vector<ConfigurationSetInformation>&& value) { m_configurationSets = std::move(value); }

    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline DescribeConfigurationSetsResult& WithConfigurationSets(const Aws::Vector<ConfigurationSetInformation>& value) { SetConfigurationSets(value); return *this;}

    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline DescribeConfigurationSetsResult& WithConfigurationSets(Aws::Vector<ConfigurationSetInformation>&& value) { SetConfigurationSets(std::move(value)); return *this;}

    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline DescribeConfigurationSetsResult& AddConfigurationSets(const ConfigurationSetInformation& value) { m_configurationSets.push_back(value); return *this; }

    /**
     * <p>An array of ConfigurationSets objects.</p>
     */
    inline DescribeConfigurationSetsResult& AddConfigurationSets(ConfigurationSetInformation&& value) { m_configurationSets.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeConfigurationSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeConfigurationSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeConfigurationSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConfigurationSetInformation> m_configurationSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
