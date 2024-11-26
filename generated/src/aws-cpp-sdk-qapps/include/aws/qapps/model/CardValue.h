/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/SubmissionMutation.h>
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
   * <p>The value or result associated with a card in a Amazon Q App
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/CardValue">AWS API
   * Reference</a></p>
   */
  class CardValue
  {
  public:
    AWS_QAPPS_API CardValue();
    AWS_QAPPS_API CardValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API CardValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the card.</p>
     */
    inline const Aws::String& GetCardId() const{ return m_cardId; }
    inline bool CardIdHasBeenSet() const { return m_cardIdHasBeenSet; }
    inline void SetCardId(const Aws::String& value) { m_cardIdHasBeenSet = true; m_cardId = value; }
    inline void SetCardId(Aws::String&& value) { m_cardIdHasBeenSet = true; m_cardId = std::move(value); }
    inline void SetCardId(const char* value) { m_cardIdHasBeenSet = true; m_cardId.assign(value); }
    inline CardValue& WithCardId(const Aws::String& value) { SetCardId(value); return *this;}
    inline CardValue& WithCardId(Aws::String&& value) { SetCardId(std::move(value)); return *this;}
    inline CardValue& WithCardId(const char* value) { SetCardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value or result associated with the card.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline CardValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CardValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CardValue& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that describes how the current form card value is mutated. Only
     * applies for form cards when multiple responses are allowed.</p>
     */
    inline const SubmissionMutation& GetSubmissionMutation() const{ return m_submissionMutation; }
    inline bool SubmissionMutationHasBeenSet() const { return m_submissionMutationHasBeenSet; }
    inline void SetSubmissionMutation(const SubmissionMutation& value) { m_submissionMutationHasBeenSet = true; m_submissionMutation = value; }
    inline void SetSubmissionMutation(SubmissionMutation&& value) { m_submissionMutationHasBeenSet = true; m_submissionMutation = std::move(value); }
    inline CardValue& WithSubmissionMutation(const SubmissionMutation& value) { SetSubmissionMutation(value); return *this;}
    inline CardValue& WithSubmissionMutation(SubmissionMutation&& value) { SetSubmissionMutation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_cardId;
    bool m_cardIdHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    SubmissionMutation m_submissionMutation;
    bool m_submissionMutationHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
