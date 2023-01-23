/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/Site.h>
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
  class GetSiteResult
  {
  public:
    AWS_OUTPOSTS_API GetSiteResult();
    AWS_OUTPOSTS_API GetSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Site& GetSite() const{ return m_site; }

    
    inline void SetSite(const Site& value) { m_site = value; }

    
    inline void SetSite(Site&& value) { m_site = std::move(value); }

    
    inline GetSiteResult& WithSite(const Site& value) { SetSite(value); return *this;}

    
    inline GetSiteResult& WithSite(Site&& value) { SetSite(std::move(value)); return *this;}

  private:

    Site m_site;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
