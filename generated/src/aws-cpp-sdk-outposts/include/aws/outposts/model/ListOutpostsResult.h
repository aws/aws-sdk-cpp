/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/Outpost.h>
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
  class ListOutpostsResult
  {
  public:
    AWS_OUTPOSTS_API ListOutpostsResult();
    AWS_OUTPOSTS_API ListOutpostsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListOutpostsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Outpost>& GetOutposts() const{ return m_outposts; }

    
    inline void SetOutposts(const Aws::Vector<Outpost>& value) { m_outposts = value; }

    
    inline void SetOutposts(Aws::Vector<Outpost>&& value) { m_outposts = std::move(value); }

    
    inline ListOutpostsResult& WithOutposts(const Aws::Vector<Outpost>& value) { SetOutposts(value); return *this;}

    
    inline ListOutpostsResult& WithOutposts(Aws::Vector<Outpost>&& value) { SetOutposts(std::move(value)); return *this;}

    
    inline ListOutpostsResult& AddOutposts(const Outpost& value) { m_outposts.push_back(value); return *this; }

    
    inline ListOutpostsResult& AddOutposts(Outpost&& value) { m_outposts.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListOutpostsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListOutpostsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListOutpostsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Outpost> m_outposts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
