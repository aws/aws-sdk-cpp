/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/Association.h>
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
  class DescribeCustomDomainAssociationsResult
  {
  public:
    AWS_REDSHIFT_API DescribeCustomDomainAssociationsResult();
    AWS_REDSHIFT_API DescribeCustomDomainAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeCustomDomainAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the custom domain association.</p>
     */
    inline DescribeCustomDomainAssociationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The associations for the custom domain.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The associations for the custom domain.</p>
     */
    inline void SetAssociations(const Aws::Vector<Association>& value) { m_associations = value; }

    /**
     * <p>The associations for the custom domain.</p>
     */
    inline void SetAssociations(Aws::Vector<Association>&& value) { m_associations = std::move(value); }

    /**
     * <p>The associations for the custom domain.</p>
     */
    inline DescribeCustomDomainAssociationsResult& WithAssociations(const Aws::Vector<Association>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The associations for the custom domain.</p>
     */
    inline DescribeCustomDomainAssociationsResult& WithAssociations(Aws::Vector<Association>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The associations for the custom domain.</p>
     */
    inline DescribeCustomDomainAssociationsResult& AddAssociations(const Association& value) { m_associations.push_back(value); return *this; }

    /**
     * <p>The associations for the custom domain.</p>
     */
    inline DescribeCustomDomainAssociationsResult& AddAssociations(Association&& value) { m_associations.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCustomDomainAssociationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCustomDomainAssociationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<Association> m_associations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
