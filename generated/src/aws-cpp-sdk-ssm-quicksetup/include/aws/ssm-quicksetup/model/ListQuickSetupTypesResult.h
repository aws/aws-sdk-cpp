/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-quicksetup/model/QuickSetupTypeOutput.h>
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
namespace SSMQuickSetup
{
namespace Model
{
  class ListQuickSetupTypesResult
  {
  public:
    AWS_SSMQUICKSETUP_API ListQuickSetupTypesResult() = default;
    AWS_SSMQUICKSETUP_API ListQuickSetupTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API ListQuickSetupTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of Quick Setup types.</p>
     */
    inline const Aws::Vector<QuickSetupTypeOutput>& GetQuickSetupTypeList() const { return m_quickSetupTypeList; }
    template<typename QuickSetupTypeListT = Aws::Vector<QuickSetupTypeOutput>>
    void SetQuickSetupTypeList(QuickSetupTypeListT&& value) { m_quickSetupTypeListHasBeenSet = true; m_quickSetupTypeList = std::forward<QuickSetupTypeListT>(value); }
    template<typename QuickSetupTypeListT = Aws::Vector<QuickSetupTypeOutput>>
    ListQuickSetupTypesResult& WithQuickSetupTypeList(QuickSetupTypeListT&& value) { SetQuickSetupTypeList(std::forward<QuickSetupTypeListT>(value)); return *this;}
    template<typename QuickSetupTypeListT = QuickSetupTypeOutput>
    ListQuickSetupTypesResult& AddQuickSetupTypeList(QuickSetupTypeListT&& value) { m_quickSetupTypeListHasBeenSet = true; m_quickSetupTypeList.emplace_back(std::forward<QuickSetupTypeListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQuickSetupTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QuickSetupTypeOutput> m_quickSetupTypeList;
    bool m_quickSetupTypeListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
