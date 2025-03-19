/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/LifecycleExpiration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/LifecycleRuleFilter.h>
#include <aws/s3/model/ExpirationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/NoncurrentVersionExpiration.h>
#include <aws/s3/model/AbortIncompleteMultipartUpload.h>
#include <aws/s3/model/Transition.h>
#include <aws/s3/model/NoncurrentVersionTransition.h>
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
   * <p>A lifecycle rule for individual objects in an Amazon S3 bucket.</p> <p>For
   * more information see, <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lifecycle-mgmt.html">Managing
   * your storage lifecycle</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/LifecycleRule">AWS
   * API Reference</a></p>
   */
  class LifecycleRule
  {
  public:
    AWS_S3_API LifecycleRule() = default;
    AWS_S3_API LifecycleRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API LifecycleRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the expiration for the lifecycle of the object in the form of date,
     * days and, whether the object has a delete marker.</p>
     */
    inline const LifecycleExpiration& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = LifecycleExpiration>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = LifecycleExpiration>
    LifecycleRule& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline const Aws::String& GetID() const { return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    template<typename IDT = Aws::String>
    void SetID(IDT&& value) { m_iDHasBeenSet = true; m_iD = std::forward<IDT>(value); }
    template<typename IDT = Aws::String>
    LifecycleRule& WithID(IDT&& value) { SetID(std::forward<IDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Filter</code> is used to identify objects that a Lifecycle Rule
     * applies to. A <code>Filter</code> must have exactly one of <code>Prefix</code>,
     * <code>Tag</code>, or <code>And</code> specified. <code>Filter</code> is required
     * if the <code>LifecycleRule</code> does not contain a <code>Prefix</code>
     * element.</p>  <p> <code>Tag</code> filters are not supported for directory
     * buckets.</p> 
     */
    inline const LifecycleRuleFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = LifecycleRuleFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = LifecycleRuleFilter>
    LifecycleRule& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is
     * not currently being applied.</p>
     */
    inline ExpirationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExpirationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LifecycleRule& WithStatus(ExpirationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This parameter applies to general purpose buckets only. It
     * is not supported for directory bucket lifecycle configurations.</p> 
     */
    inline const Aws::Vector<Transition>& GetTransitions() const { return m_transitions; }
    inline bool TransitionsHasBeenSet() const { return m_transitionsHasBeenSet; }
    template<typename TransitionsT = Aws::Vector<Transition>>
    void SetTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions = std::forward<TransitionsT>(value); }
    template<typename TransitionsT = Aws::Vector<Transition>>
    LifecycleRule& WithTransitions(TransitionsT&& value) { SetTransitions(std::forward<TransitionsT>(value)); return *this;}
    template<typename TransitionsT = Transition>
    LifecycleRule& AddTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions.emplace_back(std::forward<TransitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime.</p>  <p>This
     * parameter applies to general purpose buckets only. It is not supported for
     * directory bucket lifecycle configurations.</p> 
     */
    inline const Aws::Vector<NoncurrentVersionTransition>& GetNoncurrentVersionTransitions() const { return m_noncurrentVersionTransitions; }
    inline bool NoncurrentVersionTransitionsHasBeenSet() const { return m_noncurrentVersionTransitionsHasBeenSet; }
    template<typename NoncurrentVersionTransitionsT = Aws::Vector<NoncurrentVersionTransition>>
    void SetNoncurrentVersionTransitions(NoncurrentVersionTransitionsT&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions = std::forward<NoncurrentVersionTransitionsT>(value); }
    template<typename NoncurrentVersionTransitionsT = Aws::Vector<NoncurrentVersionTransition>>
    LifecycleRule& WithNoncurrentVersionTransitions(NoncurrentVersionTransitionsT&& value) { SetNoncurrentVersionTransitions(std::forward<NoncurrentVersionTransitionsT>(value)); return *this;}
    template<typename NoncurrentVersionTransitionsT = NoncurrentVersionTransition>
    LifecycleRule& AddNoncurrentVersionTransitions(NoncurrentVersionTransitionsT&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions.emplace_back(std::forward<NoncurrentVersionTransitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const NoncurrentVersionExpiration& GetNoncurrentVersionExpiration() const { return m_noncurrentVersionExpiration; }
    inline bool NoncurrentVersionExpirationHasBeenSet() const { return m_noncurrentVersionExpirationHasBeenSet; }
    template<typename NoncurrentVersionExpirationT = NoncurrentVersionExpiration>
    void SetNoncurrentVersionExpiration(NoncurrentVersionExpirationT&& value) { m_noncurrentVersionExpirationHasBeenSet = true; m_noncurrentVersionExpiration = std::forward<NoncurrentVersionExpirationT>(value); }
    template<typename NoncurrentVersionExpirationT = NoncurrentVersionExpiration>
    LifecycleRule& WithNoncurrentVersionExpiration(NoncurrentVersionExpirationT&& value) { SetNoncurrentVersionExpiration(std::forward<NoncurrentVersionExpirationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AbortIncompleteMultipartUpload& GetAbortIncompleteMultipartUpload() const { return m_abortIncompleteMultipartUpload; }
    inline bool AbortIncompleteMultipartUploadHasBeenSet() const { return m_abortIncompleteMultipartUploadHasBeenSet; }
    template<typename AbortIncompleteMultipartUploadT = AbortIncompleteMultipartUpload>
    void SetAbortIncompleteMultipartUpload(AbortIncompleteMultipartUploadT&& value) { m_abortIncompleteMultipartUploadHasBeenSet = true; m_abortIncompleteMultipartUpload = std::forward<AbortIncompleteMultipartUploadT>(value); }
    template<typename AbortIncompleteMultipartUploadT = AbortIncompleteMultipartUpload>
    LifecycleRule& WithAbortIncompleteMultipartUpload(AbortIncompleteMultipartUploadT&& value) { SetAbortIncompleteMultipartUpload(std::forward<AbortIncompleteMultipartUploadT>(value)); return *this;}
    ///@}
  private:

    LifecycleExpiration m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    LifecycleRuleFilter m_filter;
    bool m_filterHasBeenSet = false;

    ExpirationStatus m_status{ExpirationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Transition> m_transitions;
    bool m_transitionsHasBeenSet = false;

    Aws::Vector<NoncurrentVersionTransition> m_noncurrentVersionTransitions;
    bool m_noncurrentVersionTransitionsHasBeenSet = false;

    NoncurrentVersionExpiration m_noncurrentVersionExpiration;
    bool m_noncurrentVersionExpirationHasBeenSet = false;

    AbortIncompleteMultipartUpload m_abortIncompleteMultipartUpload;
    bool m_abortIncompleteMultipartUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
