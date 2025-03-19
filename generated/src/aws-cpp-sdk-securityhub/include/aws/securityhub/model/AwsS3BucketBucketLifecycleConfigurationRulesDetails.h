/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails.h>
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
   * <p>Configuration for a lifecycle rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How Amazon S3 responds when a multipart upload is incomplete. Specifically,
     * provides a number of days before Amazon S3 cancels the entire upload.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails& GetAbortIncompleteMultipartUpload() const { return m_abortIncompleteMultipartUpload; }
    inline bool AbortIncompleteMultipartUploadHasBeenSet() const { return m_abortIncompleteMultipartUploadHasBeenSet; }
    template<typename AbortIncompleteMultipartUploadT = AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails>
    void SetAbortIncompleteMultipartUpload(AbortIncompleteMultipartUploadT&& value) { m_abortIncompleteMultipartUploadHasBeenSet = true; m_abortIncompleteMultipartUpload = std::forward<AbortIncompleteMultipartUploadT>(value); }
    template<typename AbortIncompleteMultipartUploadT = AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithAbortIncompleteMultipartUpload(AbortIncompleteMultipartUploadT&& value) { SetAbortIncompleteMultipartUpload(std::forward<AbortIncompleteMultipartUploadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when objects are moved or deleted.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::String>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length in days of the lifetime for objects that are subject to the
     * rule.</p>
     */
    inline int GetExpirationInDays() const { return m_expirationInDays; }
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether Amazon S3 removes a delete marker that has no noncurrent versions. If
     * set to <code>true</code>, the delete marker is expired. If set to
     * <code>false</code>, the policy takes no action.</p> <p>If you provide
     * <code>ExpiredObjectDeleteMarker</code>, you cannot provide
     * <code>ExpirationInDays</code> or <code>ExpirationDate</code>.</p>
     */
    inline bool GetExpiredObjectDeleteMarker() const { return m_expiredObjectDeleteMarker; }
    inline bool ExpiredObjectDeleteMarkerHasBeenSet() const { return m_expiredObjectDeleteMarkerHasBeenSet; }
    inline void SetExpiredObjectDeleteMarker(bool value) { m_expiredObjectDeleteMarkerHasBeenSet = true; m_expiredObjectDeleteMarker = value; }
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpiredObjectDeleteMarker(bool value) { SetExpiredObjectDeleteMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the objects that a rule applies to.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline const Aws::String& GetID() const { return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    template<typename IDT = Aws::String>
    void SetID(IDT&& value) { m_iDHasBeenSet = true; m_iD = std::forward<IDT>(value); }
    template<typename IDT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithID(IDT&& value) { SetID(std::forward<IDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that an object is noncurrent before Amazon S3 can perform
     * the associated action.</p>
     */
    inline int GetNoncurrentVersionExpirationInDays() const { return m_noncurrentVersionExpirationInDays; }
    inline bool NoncurrentVersionExpirationInDaysHasBeenSet() const { return m_noncurrentVersionExpirationInDaysHasBeenSet; }
    inline void SetNoncurrentVersionExpirationInDays(int value) { m_noncurrentVersionExpirationInDaysHasBeenSet = true; m_noncurrentVersionExpirationInDays = value; }
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithNoncurrentVersionExpirationInDays(int value) { SetNoncurrentVersionExpirationInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>& GetNoncurrentVersionTransitions() const { return m_noncurrentVersionTransitions; }
    inline bool NoncurrentVersionTransitionsHasBeenSet() const { return m_noncurrentVersionTransitionsHasBeenSet; }
    template<typename NoncurrentVersionTransitionsT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>>
    void SetNoncurrentVersionTransitions(NoncurrentVersionTransitionsT&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions = std::forward<NoncurrentVersionTransitionsT>(value); }
    template<typename NoncurrentVersionTransitionsT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithNoncurrentVersionTransitions(NoncurrentVersionTransitionsT&& value) { SetNoncurrentVersionTransitions(std::forward<NoncurrentVersionTransitionsT>(value)); return *this;}
    template<typename NoncurrentVersionTransitionsT = AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& AddNoncurrentVersionTransitions(NoncurrentVersionTransitionsT&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions.emplace_back(std::forward<NoncurrentVersionTransitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>& GetTransitions() const { return m_transitions; }
    inline bool TransitionsHasBeenSet() const { return m_transitionsHasBeenSet; }
    template<typename TransitionsT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>>
    void SetTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions = std::forward<TransitionsT>(value); }
    template<typename TransitionsT = Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithTransitions(TransitionsT&& value) { SetTransitions(std::forward<TransitionsT>(value)); return *this;}
    template<typename TransitionsT = AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>
    AwsS3BucketBucketLifecycleConfigurationRulesDetails& AddTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions.emplace_back(std::forward<TransitionsT>(value)); return *this; }
    ///@}
  private:

    AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails m_abortIncompleteMultipartUpload;
    bool m_abortIncompleteMultipartUploadHasBeenSet = false;

    Aws::String m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    int m_expirationInDays{0};
    bool m_expirationInDaysHasBeenSet = false;

    bool m_expiredObjectDeleteMarker{false};
    bool m_expiredObjectDeleteMarkerHasBeenSet = false;

    AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    int m_noncurrentVersionExpirationInDays{0};
    bool m_noncurrentVersionExpirationInDaysHasBeenSet = false;

    Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails> m_noncurrentVersionTransitions;
    bool m_noncurrentVersionTransitionsHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails> m_transitions;
    bool m_transitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
