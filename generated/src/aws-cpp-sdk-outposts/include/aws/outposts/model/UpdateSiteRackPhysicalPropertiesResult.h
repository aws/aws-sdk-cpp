/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/Site.h>
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
  class UpdateSiteRackPhysicalPropertiesResult
  {
  public:
    AWS_OUTPOSTS_API UpdateSiteRackPhysicalPropertiesResult();
    AWS_OUTPOSTS_API UpdateSiteRackPhysicalPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API UpdateSiteRackPhysicalPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Site& GetSite() const{ return m_site; }

    
    inline void SetSite(const Site& value) { m_site = value; }

    
    inline void SetSite(Site&& value) { m_site = std::move(value); }

    
    inline UpdateSiteRackPhysicalPropertiesResult& WithSite(const Site& value) { SetSite(value); return *this;}

    
    inline UpdateSiteRackPhysicalPropertiesResult& WithSite(Site&& value) { SetSite(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSiteRackPhysicalPropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSiteRackPhysicalPropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSiteRackPhysicalPropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Site m_site;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
