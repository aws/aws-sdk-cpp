/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DomainStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The domain's details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DomainDetails">AWS
   * API Reference</a></p>
   */
  class DomainDetails
  {
  public:
    AWS_SAGEMAKER_API DomainDetails();
    AWS_SAGEMAKER_API DomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline DomainDetails& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline DomainDetails& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline DomainDetails& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}


    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The domain ID.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline DomainDetails& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline DomainDetails& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline DomainDetails& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name.</p>
     */
    inline DomainDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline DomainDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline DomainDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const DomainStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(DomainStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline DomainDetails& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline DomainDetails& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline DomainDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline DomainDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last modified time.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last modified time.</p>
     */
    inline DomainDetails& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last modified time.</p>
     */
    inline DomainDetails& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The domain's URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The domain's URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The domain's URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The domain's URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The domain's URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The domain's URL.</p>
     */
    inline DomainDetails& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The domain's URL.</p>
     */
    inline DomainDetails& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The domain's URL.</p>
     */
    inline DomainDetails& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DomainStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
