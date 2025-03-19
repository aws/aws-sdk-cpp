/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/RotationShift.h>
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
  class ListPreviewRotationShiftsResult
  {
  public:
    AWS_SSMCONTACTS_API ListPreviewRotationShiftsResult() = default;
    AWS_SSMCONTACTS_API ListPreviewRotationShiftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListPreviewRotationShiftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline const Aws::Vector<RotationShift>& GetRotationShifts() const { return m_rotationShifts; }
    template<typename RotationShiftsT = Aws::Vector<RotationShift>>
    void SetRotationShifts(RotationShiftsT&& value) { m_rotationShiftsHasBeenSet = true; m_rotationShifts = std::forward<RotationShiftsT>(value); }
    template<typename RotationShiftsT = Aws::Vector<RotationShift>>
    ListPreviewRotationShiftsResult& WithRotationShifts(RotationShiftsT&& value) { SetRotationShifts(std::forward<RotationShiftsT>(value)); return *this;}
    template<typename RotationShiftsT = RotationShift>
    ListPreviewRotationShiftsResult& AddRotationShifts(RotationShiftsT&& value) { m_rotationShiftsHasBeenSet = true; m_rotationShifts.emplace_back(std::forward<RotationShiftsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPreviewRotationShiftsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPreviewRotationShiftsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RotationShift> m_rotationShifts;
    bool m_rotationShiftsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
