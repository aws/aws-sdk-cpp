/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/Outpost.h>
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
namespace Outposts
{
namespace Model
{
  class GetOutpostResult
  {
  public:
    AWS_OUTPOSTS_API GetOutpostResult();
    AWS_OUTPOSTS_API GetOutpostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetOutpostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Outpost& GetOutpost() const{ return m_outpost; }

    
    inline void SetOutpost(const Outpost& value) { m_outpost = value; }

    
    inline void SetOutpost(Outpost&& value) { m_outpost = std::move(value); }

    
    inline GetOutpostResult& WithOutpost(const Outpost& value) { SetOutpost(value); return *this;}

    
    inline GetOutpostResult& WithOutpost(Outpost&& value) { SetOutpost(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetOutpostResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetOutpostResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetOutpostResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Outpost m_outpost;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
