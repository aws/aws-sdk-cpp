/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ClassificationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/CustomDataIdentifiersResult.h>
#include <aws/securityhub/model/SensitiveDataResult.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the sensitive data that was detected on the
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ClassificationResult">AWS
   * API Reference</a></p>
   */
  class ClassificationResult
  {
  public:
    AWS_SECURITYHUB_API ClassificationResult();
    AWS_SECURITYHUB_API ClassificationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ClassificationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of content that the finding applies to.</p>
     */
    inline const Aws::String& GetMimeType() const{ return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    inline void SetMimeType(const Aws::String& value) { m_mimeTypeHasBeenSet = true; m_mimeType = value; }
    inline void SetMimeType(Aws::String&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::move(value); }
    inline void SetMimeType(const char* value) { m_mimeTypeHasBeenSet = true; m_mimeType.assign(value); }
    inline ClassificationResult& WithMimeType(const Aws::String& value) { SetMimeType(value); return *this;}
    inline ClassificationResult& WithMimeType(Aws::String&& value) { SetMimeType(std::move(value)); return *this;}
    inline ClassificationResult& WithMimeType(const char* value) { SetMimeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size in bytes of the affected data.</p>
     */
    inline long long GetSizeClassified() const{ return m_sizeClassified; }
    inline bool SizeClassifiedHasBeenSet() const { return m_sizeClassifiedHasBeenSet; }
    inline void SetSizeClassified(long long value) { m_sizeClassifiedHasBeenSet = true; m_sizeClassified = value; }
    inline ClassificationResult& WithSizeClassified(long long value) { SetSizeClassified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are additional occurrences of sensitive data that are
     * not included in the finding. This occurs when the number of occurrences exceeds
     * the maximum that can be included.</p>
     */
    inline bool GetAdditionalOccurrences() const{ return m_additionalOccurrences; }
    inline bool AdditionalOccurrencesHasBeenSet() const { return m_additionalOccurrencesHasBeenSet; }
    inline void SetAdditionalOccurrences(bool value) { m_additionalOccurrencesHasBeenSet = true; m_additionalOccurrences = value; }
    inline ClassificationResult& WithAdditionalOccurrences(bool value) { SetAdditionalOccurrences(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the sensitive data detection.</p>
     */
    inline const ClassificationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClassificationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClassificationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClassificationResult& WithStatus(const ClassificationStatus& value) { SetStatus(value); return *this;}
    inline ClassificationResult& WithStatus(ClassificationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about sensitive data that was identified based on built-in
     * configuration.</p>
     */
    inline const Aws::Vector<SensitiveDataResult>& GetSensitiveData() const{ return m_sensitiveData; }
    inline bool SensitiveDataHasBeenSet() const { return m_sensitiveDataHasBeenSet; }
    inline void SetSensitiveData(const Aws::Vector<SensitiveDataResult>& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData = value; }
    inline void SetSensitiveData(Aws::Vector<SensitiveDataResult>&& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData = std::move(value); }
    inline ClassificationResult& WithSensitiveData(const Aws::Vector<SensitiveDataResult>& value) { SetSensitiveData(value); return *this;}
    inline ClassificationResult& WithSensitiveData(Aws::Vector<SensitiveDataResult>&& value) { SetSensitiveData(std::move(value)); return *this;}
    inline ClassificationResult& AddSensitiveData(const SensitiveDataResult& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData.push_back(value); return *this; }
    inline ClassificationResult& AddSensitiveData(SensitiveDataResult&& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides details about sensitive data that was identified based on
     * customer-defined configuration.</p>
     */
    inline const CustomDataIdentifiersResult& GetCustomDataIdentifiers() const{ return m_customDataIdentifiers; }
    inline bool CustomDataIdentifiersHasBeenSet() const { return m_customDataIdentifiersHasBeenSet; }
    inline void SetCustomDataIdentifiers(const CustomDataIdentifiersResult& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers = value; }
    inline void SetCustomDataIdentifiers(CustomDataIdentifiersResult&& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers = std::move(value); }
    inline ClassificationResult& WithCustomDataIdentifiers(const CustomDataIdentifiersResult& value) { SetCustomDataIdentifiers(value); return *this;}
    inline ClassificationResult& WithCustomDataIdentifiers(CustomDataIdentifiersResult&& value) { SetCustomDataIdentifiers(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    long long m_sizeClassified;
    bool m_sizeClassifiedHasBeenSet = false;

    bool m_additionalOccurrences;
    bool m_additionalOccurrencesHasBeenSet = false;

    ClassificationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<SensitiveDataResult> m_sensitiveData;
    bool m_sensitiveDataHasBeenSet = false;

    CustomDataIdentifiersResult m_customDataIdentifiers;
    bool m_customDataIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
