/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdatePartnerStatusResult
  {
  public:
    AWS_REDSHIFT_API UpdatePartnerStatusResult();
    AWS_REDSHIFT_API UpdatePartnerStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API UpdatePartnerStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseName = value; }

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseName = std::move(value); }

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseName.assign(value); }

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline UpdatePartnerStatusResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline UpdatePartnerStatusResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline UpdatePartnerStatusResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline void SetPartnerName(const Aws::String& value) { m_partnerName = value; }

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline void SetPartnerName(Aws::String&& value) { m_partnerName = std::move(value); }

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline void SetPartnerName(const char* value) { m_partnerName.assign(value); }

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline UpdatePartnerStatusResult& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline UpdatePartnerStatusResult& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline UpdatePartnerStatusResult& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UpdatePartnerStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdatePartnerStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_databaseName;

    Aws::String m_partnerName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
