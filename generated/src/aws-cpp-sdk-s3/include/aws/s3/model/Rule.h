/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/LifecycleExpiration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ExpirationStatus.h>
#include <aws/s3/model/Transition.h>
#include <aws/s3/model/NoncurrentVersionTransition.h>
#include <aws/s3/model/NoncurrentVersionExpiration.h>
#include <aws/s3/model/AbortIncompleteMultipartUpload.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies lifecycle rules for an Amazon S3 bucket. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTBucketPUTlifecycle.html">Put
   * Bucket Lifecycle Configuration</a> in the <i>Amazon S3 API Reference</i>. For
   * examples, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html#API_PutBucketLifecycleConfiguration_Examples">Put
   * Bucket Lifecycle Configuration Examples</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_S3_API Rule() = default;
    AWS_S3_API Rule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Rule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the expiration for the lifecycle of the object.</p>
     */
    inline const LifecycleExpiration& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = LifecycleExpiration>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = LifecycleExpiration>
    Rule& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the rule. The value can't be longer than 255
     * characters.</p>
     */
    inline const Aws::String& GetID() const { return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    template<typename IDT = Aws::String>
    void SetID(IDT&& value) { m_iDHasBeenSet = true; m_iD = std::forward<IDT>(value); }
    template<typename IDT = Aws::String>
    Rule& WithID(IDT&& value) { SetID(std::forward<IDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object key prefix that identifies one or more objects to which this rule
     * applies.</p>  <p>Replacement must be made for object keys containing
     * special characters (such as carriage returns) when using XML requests. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-xml-related-constraints">
     * XML related object key constraints</a>.</p> 
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    Rule& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>Enabled</code>, the rule is currently being applied. If
     * <code>Disabled</code>, the rule is not currently being applied.</p>
     */
    inline ExpirationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExpirationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Rule& WithStatus(ExpirationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when an object transitions to a specified storage class. For more
     * information about Amazon S3 lifecycle configuration rules, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/lifecycle-transition-general-considerations.html">Transitioning
     * Objects Using Amazon S3 Lifecycle</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Transition& GetTransition() const { return m_transition; }
    inline bool TransitionHasBeenSet() const { return m_transitionHasBeenSet; }
    template<typename TransitionT = Transition>
    void SetTransition(TransitionT&& value) { m_transitionHasBeenSet = true; m_transition = std::forward<TransitionT>(value); }
    template<typename TransitionT = Transition>
    Rule& WithTransition(TransitionT&& value) { SetTransition(std::forward<TransitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NoncurrentVersionTransition& GetNoncurrentVersionTransition() const { return m_noncurrentVersionTransition; }
    inline bool NoncurrentVersionTransitionHasBeenSet() const { return m_noncurrentVersionTransitionHasBeenSet; }
    template<typename NoncurrentVersionTransitionT = NoncurrentVersionTransition>
    void SetNoncurrentVersionTransition(NoncurrentVersionTransitionT&& value) { m_noncurrentVersionTransitionHasBeenSet = true; m_noncurrentVersionTransition = std::forward<NoncurrentVersionTransitionT>(value); }
    template<typename NoncurrentVersionTransitionT = NoncurrentVersionTransition>
    Rule& WithNoncurrentVersionTransition(NoncurrentVersionTransitionT&& value) { SetNoncurrentVersionTransition(std::forward<NoncurrentVersionTransitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NoncurrentVersionExpiration& GetNoncurrentVersionExpiration() const { return m_noncurrentVersionExpiration; }
    inline bool NoncurrentVersionExpirationHasBeenSet() const { return m_noncurrentVersionExpirationHasBeenSet; }
    template<typename NoncurrentVersionExpirationT = NoncurrentVersionExpiration>
    void SetNoncurrentVersionExpiration(NoncurrentVersionExpirationT&& value) { m_noncurrentVersionExpirationHasBeenSet = true; m_noncurrentVersionExpiration = std::forward<NoncurrentVersionExpirationT>(value); }
    template<typename NoncurrentVersionExpirationT = NoncurrentVersionExpiration>
    Rule& WithNoncurrentVersionExpiration(NoncurrentVersionExpirationT&& value) { SetNoncurrentVersionExpiration(std::forward<NoncurrentVersionExpirationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AbortIncompleteMultipartUpload& GetAbortIncompleteMultipartUpload() const { return m_abortIncompleteMultipartUpload; }
    inline bool AbortIncompleteMultipartUploadHasBeenSet() const { return m_abortIncompleteMultipartUploadHasBeenSet; }
    template<typename AbortIncompleteMultipartUploadT = AbortIncompleteMultipartUpload>
    void SetAbortIncompleteMultipartUpload(AbortIncompleteMultipartUploadT&& value) { m_abortIncompleteMultipartUploadHasBeenSet = true; m_abortIncompleteMultipartUpload = std::forward<AbortIncompleteMultipartUploadT>(value); }
    template<typename AbortIncompleteMultipartUploadT = AbortIncompleteMultipartUpload>
    Rule& WithAbortIncompleteMultipartUpload(AbortIncompleteMultipartUploadT&& value) { SetAbortIncompleteMultipartUpload(std::forward<AbortIncompleteMultipartUploadT>(value)); return *this;}
    ///@}
  private:

    LifecycleExpiration m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    ExpirationStatus m_status{ExpirationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Transition m_transition;
    bool m_transitionHasBeenSet = false;

    NoncurrentVersionTransition m_noncurrentVersionTransition;
    bool m_noncurrentVersionTransitionHasBeenSet = false;

    NoncurrentVersionExpiration m_noncurrentVersionExpiration;
    bool m_noncurrentVersionExpirationHasBeenSet = false;

    AbortIncompleteMultipartUpload m_abortIncompleteMultipartUpload;
    bool m_abortIncompleteMultipartUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
