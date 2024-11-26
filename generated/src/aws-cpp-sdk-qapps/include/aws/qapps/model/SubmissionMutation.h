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
    AWS_QAPPS_API SubmissionMutation();
    AWS_QAPPS_API SubmissionMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API SubmissionMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the submission.</p>
     */
    inline const Aws::String& GetSubmissionId() const{ return m_submissionId; }
    inline bool SubmissionIdHasBeenSet() const { return m_submissionIdHasBeenSet; }
    inline void SetSubmissionId(const Aws::String& value) { m_submissionIdHasBeenSet = true; m_submissionId = value; }
    inline void SetSubmissionId(Aws::String&& value) { m_submissionIdHasBeenSet = true; m_submissionId = std::move(value); }
    inline void SetSubmissionId(const char* value) { m_submissionIdHasBeenSet = true; m_submissionId.assign(value); }
    inline SubmissionMutation& WithSubmissionId(const Aws::String& value) { SetSubmissionId(value); return *this;}
    inline SubmissionMutation& WithSubmissionId(Aws::String&& value) { SetSubmissionId(std::move(value)); return *this;}
    inline SubmissionMutation& WithSubmissionId(const char* value) { SetSubmissionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that is performed on a submission.</p>
     */
    inline const SubmissionMutationKind& GetMutationType() const{ return m_mutationType; }
    inline bool MutationTypeHasBeenSet() const { return m_mutationTypeHasBeenSet; }
    inline void SetMutationType(const SubmissionMutationKind& value) { m_mutationTypeHasBeenSet = true; m_mutationType = value; }
    inline void SetMutationType(SubmissionMutationKind&& value) { m_mutationTypeHasBeenSet = true; m_mutationType = std::move(value); }
    inline SubmissionMutation& WithMutationType(const SubmissionMutationKind& value) { SetMutationType(value); return *this;}
    inline SubmissionMutation& WithMutationType(SubmissionMutationKind&& value) { SetMutationType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_submissionId;
    bool m_submissionIdHasBeenSet = false;

    SubmissionMutationKind m_mutationType;
    bool m_mutationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
