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
    AWS_SSMQUICKSETUP_API ListQuickSetupTypesResult();
    AWS_SSMQUICKSETUP_API ListQuickSetupTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API ListQuickSetupTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of Quick Setup types.</p>
     */
    inline const Aws::Vector<QuickSetupTypeOutput>& GetQuickSetupTypeList() const{ return m_quickSetupTypeList; }
    inline void SetQuickSetupTypeList(const Aws::Vector<QuickSetupTypeOutput>& value) { m_quickSetupTypeList = value; }
    inline void SetQuickSetupTypeList(Aws::Vector<QuickSetupTypeOutput>&& value) { m_quickSetupTypeList = std::move(value); }
    inline ListQuickSetupTypesResult& WithQuickSetupTypeList(const Aws::Vector<QuickSetupTypeOutput>& value) { SetQuickSetupTypeList(value); return *this;}
    inline ListQuickSetupTypesResult& WithQuickSetupTypeList(Aws::Vector<QuickSetupTypeOutput>&& value) { SetQuickSetupTypeList(std::move(value)); return *this;}
    inline ListQuickSetupTypesResult& AddQuickSetupTypeList(const QuickSetupTypeOutput& value) { m_quickSetupTypeList.push_back(value); return *this; }
    inline ListQuickSetupTypesResult& AddQuickSetupTypeList(QuickSetupTypeOutput&& value) { m_quickSetupTypeList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQuickSetupTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQuickSetupTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQuickSetupTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<QuickSetupTypeOutput> m_quickSetupTypeList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
