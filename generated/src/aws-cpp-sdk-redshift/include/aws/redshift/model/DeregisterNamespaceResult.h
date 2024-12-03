/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/NamespaceRegistrationStatus.h>
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
  class DeregisterNamespaceResult
  {
  public:
    AWS_REDSHIFT_API DeregisterNamespaceResult();
    AWS_REDSHIFT_API DeregisterNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DeregisterNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The registration status of the cluster or serverless namespace.</p>
     */
    inline const NamespaceRegistrationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const NamespaceRegistrationStatus& value) { m_status = value; }
    inline void SetStatus(NamespaceRegistrationStatus&& value) { m_status = std::move(value); }
    inline DeregisterNamespaceResult& WithStatus(const NamespaceRegistrationStatus& value) { SetStatus(value); return *this;}
    inline DeregisterNamespaceResult& WithStatus(NamespaceRegistrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DeregisterNamespaceResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DeregisterNamespaceResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    NamespaceRegistrationStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
