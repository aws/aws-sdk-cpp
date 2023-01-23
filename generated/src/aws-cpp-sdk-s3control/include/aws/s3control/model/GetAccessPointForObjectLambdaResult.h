/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline GetAccessPointForObjectLambdaResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline GetAccessPointForObjectLambdaResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline GetAccessPointForObjectLambdaResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Configuration to block all public access. This setting is turned on and can
     * not be edited. </p>
     */
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlockConfiguration() const{ return m_publicAccessBlockConfiguration; }

    /**
     * <p>Configuration to block all public access. This setting is turned on and can
     * not be edited. </p>
     */
    inline void SetPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { m_publicAccessBlockConfiguration = value; }

    /**
     * <p>Configuration to block all public access. This setting is turned on and can
     * not be edited. </p>
     */
    inline void SetPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { m_publicAccessBlockConfiguration = std::move(value); }

    /**
     * <p>Configuration to block all public access. This setting is turned on and can
     * not be edited. </p>
     */
    inline GetAccessPointForObjectLambdaResult& WithPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { SetPublicAccessBlockConfiguration(value); return *this;}

    /**
     * <p>Configuration to block all public access. This setting is turned on and can
     * not be edited. </p>
     */
    inline GetAccessPointForObjectLambdaResult& WithPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { SetPublicAccessBlockConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date and time when the specified Object Lambda Access Point was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the specified Object Lambda Access Point was
     * created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time when the specified Object Lambda Access Point was
     * created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the specified Object Lambda Access Point was
     * created.</p>
     */
    inline GetAccessPointForObjectLambdaResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the specified Object Lambda Access Point was
     * created.</p>
     */
    inline GetAccessPointForObjectLambdaResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    PublicAccessBlockConfiguration m_publicAccessBlockConfiguration;

    Aws::Utils::DateTime m_creationDate;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
