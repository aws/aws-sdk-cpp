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
    AWS_QAPPS_API CardValue() = default;
    AWS_QAPPS_API CardValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API CardValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the card.</p>
     */
    inline const Aws::String& GetCardId() const { return m_cardId; }
    inline bool CardIdHasBeenSet() const { return m_cardIdHasBeenSet; }
    template<typename CardIdT = Aws::String>
    void SetCardId(CardIdT&& value) { m_cardIdHasBeenSet = true; m_cardId = std::forward<CardIdT>(value); }
    template<typename CardIdT = Aws::String>
    CardValue& WithCardId(CardIdT&& value) { SetCardId(std::forward<CardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value or result associated with the card.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    CardValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that describes how the current form card value is mutated. Only
     * applies for form cards when multiple responses are allowed.</p>
     */
    inline const SubmissionMutation& GetSubmissionMutation() const { return m_submissionMutation; }
    inline bool SubmissionMutationHasBeenSet() const { return m_submissionMutationHasBeenSet; }
    template<typename SubmissionMutationT = SubmissionMutation>
    void SetSubmissionMutation(SubmissionMutationT&& value) { m_submissionMutationHasBeenSet = true; m_submissionMutation = std::forward<SubmissionMutationT>(value); }
    template<typename SubmissionMutationT = SubmissionMutation>
    CardValue& WithSubmissionMutation(SubmissionMutationT&& value) { SetSubmissionMutation(std::forward<SubmissionMutationT>(value)); return *this;}
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
