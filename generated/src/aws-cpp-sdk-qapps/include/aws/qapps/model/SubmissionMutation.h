/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/SubmissionMutationKind.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>Represents an action performed on a submission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/SubmissionMutation">AWS
   * API Reference</a></p>
   */
  class SubmissionMutation
  {
  public:
    AWS_QAPPS_API SubmissionMutation() = default;
    AWS_QAPPS_API SubmissionMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API SubmissionMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the submission.</p>
     */
    inline const Aws::String& GetSubmissionId() const { return m_submissionId; }
    inline bool SubmissionIdHasBeenSet() const { return m_submissionIdHasBeenSet; }
    template<typename SubmissionIdT = Aws::String>
    void SetSubmissionId(SubmissionIdT&& value) { m_submissionIdHasBeenSet = true; m_submissionId = std::forward<SubmissionIdT>(value); }
    template<typename SubmissionIdT = Aws::String>
    SubmissionMutation& WithSubmissionId(SubmissionIdT&& value) { SetSubmissionId(std::forward<SubmissionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that is performed on a submission.</p>
     */
    inline SubmissionMutationKind GetMutationType() const { return m_mutationType; }
    inline bool MutationTypeHasBeenSet() const { return m_mutationTypeHasBeenSet; }
    inline void SetMutationType(SubmissionMutationKind value) { m_mutationTypeHasBeenSet = true; m_mutationType = value; }
    inline SubmissionMutation& WithMutationType(SubmissionMutationKind value) { SetMutationType(value); return *this;}
    ///@}
  private:

    Aws::String m_submissionId;
    bool m_submissionIdHasBeenSet = false;

    SubmissionMutationKind m_mutationType{SubmissionMutationKind::NOT_SET};
    bool m_mutationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
