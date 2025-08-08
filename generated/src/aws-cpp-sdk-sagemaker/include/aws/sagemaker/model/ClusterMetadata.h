/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Metadata information about a HyperPod cluster showing information about the
   * cluster level operations, such as creating, updating, and
   * deleting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterMetadata">AWS
   * API Reference</a></p>
   */
  class ClusterMetadata
  {
  public:
    AWS_SAGEMAKER_API ClusterMetadata() = default;
    AWS_SAGEMAKER_API ClusterMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An error message describing why the cluster level operation (such as
     * creating, updating, or deleting) failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    ClusterMetadata& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EKS IAM role ARNs associated with the cluster. This is
     * created by HyperPod on your behalf and only applies for EKS orchestrated
     * clusters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEksRoleAccessEntries() const { return m_eksRoleAccessEntries; }
    inline bool EksRoleAccessEntriesHasBeenSet() const { return m_eksRoleAccessEntriesHasBeenSet; }
    template<typename EksRoleAccessEntriesT = Aws::Vector<Aws::String>>
    void SetEksRoleAccessEntries(EksRoleAccessEntriesT&& value) { m_eksRoleAccessEntriesHasBeenSet = true; m_eksRoleAccessEntries = std::forward<EksRoleAccessEntriesT>(value); }
    template<typename EksRoleAccessEntriesT = Aws::Vector<Aws::String>>
    ClusterMetadata& WithEksRoleAccessEntries(EksRoleAccessEntriesT&& value) { SetEksRoleAccessEntries(std::forward<EksRoleAccessEntriesT>(value)); return *this;}
    template<typename EksRoleAccessEntriesT = Aws::String>
    ClusterMetadata& AddEksRoleAccessEntries(EksRoleAccessEntriesT&& value) { m_eksRoleAccessEntriesHasBeenSet = true; m_eksRoleAccessEntries.emplace_back(std::forward<EksRoleAccessEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Service-Linked Role (SLR) associated with the cluster. This is created by
     * HyperPod on your behalf and only applies for EKS orchestrated clusters.</p>
     */
    inline const Aws::String& GetSlrAccessEntry() const { return m_slrAccessEntry; }
    inline bool SlrAccessEntryHasBeenSet() const { return m_slrAccessEntryHasBeenSet; }
    template<typename SlrAccessEntryT = Aws::String>
    void SetSlrAccessEntry(SlrAccessEntryT&& value) { m_slrAccessEntryHasBeenSet = true; m_slrAccessEntry = std::forward<SlrAccessEntryT>(value); }
    template<typename SlrAccessEntryT = Aws::String>
    ClusterMetadata& WithSlrAccessEntry(SlrAccessEntryT&& value) { SetSlrAccessEntry(std::forward<SlrAccessEntryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_eksRoleAccessEntries;
    bool m_eksRoleAccessEntriesHasBeenSet = false;

    Aws::String m_slrAccessEntry;
    bool m_slrAccessEntryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
