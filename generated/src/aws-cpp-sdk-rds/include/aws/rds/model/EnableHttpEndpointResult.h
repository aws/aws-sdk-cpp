/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class EnableHttpEndpointResult
  {
  public:
    AWS_RDS_API EnableHttpEndpointResult();
    AWS_RDS_API EnableHttpEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API EnableHttpEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline EnableHttpEndpointResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline EnableHttpEndpointResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the DB cluster.</p>
     */
    inline EnableHttpEndpointResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Indicates whether the HTTP endpoint is enabled or disabled for the DB
     * cluster.</p>
     */
    inline bool GetHttpEndpointEnabled() const{ return m_httpEndpointEnabled; }

    /**
     * <p>Indicates whether the HTTP endpoint is enabled or disabled for the DB
     * cluster.</p>
     */
    inline void SetHttpEndpointEnabled(bool value) { m_httpEndpointEnabled = value; }

    /**
     * <p>Indicates whether the HTTP endpoint is enabled or disabled for the DB
     * cluster.</p>
     */
    inline EnableHttpEndpointResult& WithHttpEndpointEnabled(bool value) { SetHttpEndpointEnabled(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableHttpEndpointResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableHttpEndpointResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;

    bool m_httpEndpointEnabled;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
