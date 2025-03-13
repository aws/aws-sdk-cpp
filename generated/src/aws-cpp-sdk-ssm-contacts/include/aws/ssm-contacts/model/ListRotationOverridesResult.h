/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/RotationOverride.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListRotationOverridesResult
  {
  public:
    AWS_SSMCONTACTS_API ListRotationOverridesResult() = default;
    AWS_SSMCONTACTS_API ListRotationOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListRotationOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline const Aws::Vector<RotationOverride>& GetRotationOverrides() const { return m_rotationOverrides; }
    template<typename RotationOverridesT = Aws::Vector<RotationOverride>>
    void SetRotationOverrides(RotationOverridesT&& value) { m_rotationOverridesHasBeenSet = true; m_rotationOverrides = std::forward<RotationOverridesT>(value); }
    template<typename RotationOverridesT = Aws::Vector<RotationOverride>>
    ListRotationOverridesResult& WithRotationOverrides(RotationOverridesT&& value) { SetRotationOverrides(std::forward<RotationOverridesT>(value)); return *this;}
    template<typename RotationOverridesT = RotationOverride>
    ListRotationOverridesResult& AddRotationOverrides(RotationOverridesT&& value) { m_rotationOverridesHasBeenSet = true; m_rotationOverrides.emplace_back(std::forward<RotationOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRotationOverridesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRotationOverridesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RotationOverride> m_rotationOverrides;
    bool m_rotationOverridesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
