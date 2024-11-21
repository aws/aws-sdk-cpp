/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
namespace TaxSettings
{
namespace Model
{
  class GetTaxRegistrationDocumentResult
  {
  public:
    AWS_TAXSETTINGS_API GetTaxRegistrationDocumentResult();
    AWS_TAXSETTINGS_API GetTaxRegistrationDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxRegistrationDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The file path of the Amazon S3 bucket where you want to download your tax
     * document to.</p>
     */
    inline const Aws::String& GetDestinationFilePath() const{ return m_destinationFilePath; }
    inline void SetDestinationFilePath(const Aws::String& value) { m_destinationFilePath = value; }
    inline void SetDestinationFilePath(Aws::String&& value) { m_destinationFilePath = std::move(value); }
    inline void SetDestinationFilePath(const char* value) { m_destinationFilePath.assign(value); }
    inline GetTaxRegistrationDocumentResult& WithDestinationFilePath(const Aws::String& value) { SetDestinationFilePath(value); return *this;}
    inline GetTaxRegistrationDocumentResult& WithDestinationFilePath(Aws::String&& value) { SetDestinationFilePath(std::move(value)); return *this;}
    inline GetTaxRegistrationDocumentResult& WithDestinationFilePath(const char* value) { SetDestinationFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 presigned URL of the tax registration document. </p>
     */
    inline const Aws::String& GetPresignedS3Url() const{ return m_presignedS3Url; }
    inline void SetPresignedS3Url(const Aws::String& value) { m_presignedS3Url = value; }
    inline void SetPresignedS3Url(Aws::String&& value) { m_presignedS3Url = std::move(value); }
    inline void SetPresignedS3Url(const char* value) { m_presignedS3Url.assign(value); }
    inline GetTaxRegistrationDocumentResult& WithPresignedS3Url(const Aws::String& value) { SetPresignedS3Url(value); return *this;}
    inline GetTaxRegistrationDocumentResult& WithPresignedS3Url(Aws::String&& value) { SetPresignedS3Url(std::move(value)); return *this;}
    inline GetTaxRegistrationDocumentResult& WithPresignedS3Url(const char* value) { SetPresignedS3Url(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTaxRegistrationDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTaxRegistrationDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTaxRegistrationDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationFilePath;

    Aws::String m_presignedS3Url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
