/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/ObjectLambdaAccessPointAlias.h>
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
namespace S3Control
{
namespace Model
{
  class GetAccessPointForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointForObjectLambdaResult();
    AWS_S3CONTROL_API GetAccessPointForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetAccessPointForObjectLambdaResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration to block all public access. This setting is turned on and can
     * not be edited. </p>
     */
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlockConfiguration() const{ return m_publicAccessBlockConfiguration; }
    inline void SetPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { m_publicAccessBlockConfiguration = value; }
    inline void SetPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { m_publicAccessBlockConfiguration = std::move(value); }
    inline GetAccessPointForObjectLambdaResult& WithPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { SetPublicAccessBlockConfiguration(value); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { SetPublicAccessBlockConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the specified Object Lambda Access Point was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline GetAccessPointForObjectLambdaResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the Object Lambda Access Point.</p>
     */
    inline const ObjectLambdaAccessPointAlias& GetAlias() const{ return m_alias; }
    inline void SetAlias(const ObjectLambdaAccessPointAlias& value) { m_alias = value; }
    inline void SetAlias(ObjectLambdaAccessPointAlias&& value) { m_alias = std::move(value); }
    inline GetAccessPointForObjectLambdaResult& WithAlias(const ObjectLambdaAccessPointAlias& value) { SetAlias(value); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithAlias(ObjectLambdaAccessPointAlias&& value) { SetAlias(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessPointForObjectLambdaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetAccessPointForObjectLambdaResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetAccessPointForObjectLambdaResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    PublicAccessBlockConfiguration m_publicAccessBlockConfiguration;

    Aws::Utils::DateTime m_creationDate;

    ObjectLambdaAccessPointAlias m_alias;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
