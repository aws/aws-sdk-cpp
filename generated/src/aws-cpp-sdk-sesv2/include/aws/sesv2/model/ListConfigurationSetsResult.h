/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of configuration sets in your Amazon SES account in the current Amazon
   * Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListConfigurationSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListConfigurationSetsResult
  {
  public:
    AWS_SESV2_API ListConfigurationSetsResult() = default;
    AWS_SESV2_API ListConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains all of the configuration sets in your Amazon SES
     * account in the current Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationSets() const { return m_configurationSets; }
    template<typename ConfigurationSetsT = Aws::Vector<Aws::String>>
    void SetConfigurationSets(ConfigurationSetsT&& value) { m_configurationSetsHasBeenSet = true; m_configurationSets = std::forward<ConfigurationSetsT>(value); }
    template<typename ConfigurationSetsT = Aws::Vector<Aws::String>>
    ListConfigurationSetsResult& WithConfigurationSets(ConfigurationSetsT&& value) { SetConfigurationSets(std::forward<ConfigurationSetsT>(value)); return *this;}
    template<typename ConfigurationSetsT = Aws::String>
    ListConfigurationSetsResult& AddConfigurationSets(ConfigurationSetsT&& value) { m_configurationSetsHasBeenSet = true; m_configurationSets.emplace_back(std::forward<ConfigurationSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_configurationSets;
    bool m_configurationSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
