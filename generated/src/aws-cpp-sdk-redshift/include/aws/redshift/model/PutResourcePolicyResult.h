/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ResourcePolicy.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_REDSHIFT_API PutResourcePolicyResult();
    AWS_REDSHIFT_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The content of the updated resource policy.</p>
     */
    inline const ResourcePolicy& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The content of the updated resource policy.</p>
     */
    inline void SetResourcePolicy(const ResourcePolicy& value) { m_resourcePolicy = value; }

    /**
     * <p>The content of the updated resource policy.</p>
     */
    inline void SetResourcePolicy(ResourcePolicy&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>The content of the updated resource policy.</p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(const ResourcePolicy& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The content of the updated resource policy.</p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(ResourcePolicy&& value) { SetResourcePolicy(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PutResourcePolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PutResourcePolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ResourcePolicy m_resourcePolicy;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
