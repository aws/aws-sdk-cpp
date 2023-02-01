/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
  class CreateOutpostResult
  {
  public:
    AWS_OUTPOSTS_API CreateOutpostResult();
    AWS_OUTPOSTS_API CreateOutpostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API CreateOutpostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Outpost& GetOutpost() const{ return m_outpost; }

    
    inline void SetOutpost(const Outpost& value) { m_outpost = value; }

    
    inline void SetOutpost(Outpost&& value) { m_outpost = std::move(value); }

    
    inline CreateOutpostResult& WithOutpost(const Outpost& value) { SetOutpost(value); return *this;}

    
    inline CreateOutpostResult& WithOutpost(Outpost&& value) { SetOutpost(std::move(value)); return *this;}

  private:

    Outpost m_outpost;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
