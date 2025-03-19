/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputSecurityGroup.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListInputSecurityGroupsResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroupsResponse">AWS
   * API Reference</a></p>
   */
  class ListInputSecurityGroupsResult
  {
  public:
    AWS_MEDIALIVE_API ListInputSecurityGroupsResult() = default;
    AWS_MEDIALIVE_API ListInputSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListInputSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of input security groups
     */
    inline const Aws::Vector<InputSecurityGroup>& GetInputSecurityGroups() const { return m_inputSecurityGroups; }
    template<typename InputSecurityGroupsT = Aws::Vector<InputSecurityGroup>>
    void SetInputSecurityGroups(InputSecurityGroupsT&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = std::forward<InputSecurityGroupsT>(value); }
    template<typename InputSecurityGroupsT = Aws::Vector<InputSecurityGroup>>
    ListInputSecurityGroupsResult& WithInputSecurityGroups(InputSecurityGroupsT&& value) { SetInputSecurityGroups(std::forward<InputSecurityGroupsT>(value)); return *this;}
    template<typename InputSecurityGroupsT = InputSecurityGroup>
    ListInputSecurityGroupsResult& AddInputSecurityGroups(InputSecurityGroupsT&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.emplace_back(std::forward<InputSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInputSecurityGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInputSecurityGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InputSecurityGroup> m_inputSecurityGroups;
    bool m_inputSecurityGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
