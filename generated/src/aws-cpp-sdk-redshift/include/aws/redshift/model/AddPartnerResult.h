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
  class AddPartnerResult
  {
  public:
    AWS_REDSHIFT_API AddPartnerResult();
    AWS_REDSHIFT_API AddPartnerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API AddPartnerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline AddPartnerResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline AddPartnerResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database that receives data from the partner.</p>
     */
    inline AddPartnerResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline AddPartnerResult& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline AddPartnerResult& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner that is authorized to send data.</p>
     */
    inline AddPartnerResult& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AddPartnerResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AddPartnerResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_databaseName;

    Aws::String m_partnerName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
