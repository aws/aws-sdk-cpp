/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/InstanceTypeItem.h>
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
namespace Outposts
{
namespace Model
{
  class GetOutpostSupportedInstanceTypesResult
  {
  public:
    AWS_OUTPOSTS_API GetOutpostSupportedInstanceTypesResult();
    AWS_OUTPOSTS_API GetOutpostSupportedInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetOutpostSupportedInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<InstanceTypeItem>& GetInstanceTypes() const{ return m_instanceTypes; }

    
    inline void SetInstanceTypes(const Aws::Vector<InstanceTypeItem>& value) { m_instanceTypes = value; }

    
    inline void SetInstanceTypes(Aws::Vector<InstanceTypeItem>&& value) { m_instanceTypes = std::move(value); }

    
    inline GetOutpostSupportedInstanceTypesResult& WithInstanceTypes(const Aws::Vector<InstanceTypeItem>& value) { SetInstanceTypes(value); return *this;}

    
    inline GetOutpostSupportedInstanceTypesResult& WithInstanceTypes(Aws::Vector<InstanceTypeItem>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    
    inline GetOutpostSupportedInstanceTypesResult& AddInstanceTypes(const InstanceTypeItem& value) { m_instanceTypes.push_back(value); return *this; }

    
    inline GetOutpostSupportedInstanceTypesResult& AddInstanceTypes(InstanceTypeItem&& value) { m_instanceTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline GetOutpostSupportedInstanceTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetOutpostSupportedInstanceTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetOutpostSupportedInstanceTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetOutpostSupportedInstanceTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetOutpostSupportedInstanceTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetOutpostSupportedInstanceTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InstanceTypeItem> m_instanceTypes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
