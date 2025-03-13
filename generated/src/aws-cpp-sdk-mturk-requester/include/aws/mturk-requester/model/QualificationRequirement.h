/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/Comparator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/HITAccessActions.h>
#include <aws/mturk-requester/model/Locale.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The QualificationRequirement data structure describes a Qualification that a
   * Worker must have before the Worker is allowed to accept a HIT. A requirement may
   * optionally state that a Worker must have the Qualification in order to preview
   * the HIT, or see the HIT in search results. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationRequirement">AWS
   * API Reference</a></p>
   */
  class QualificationRequirement
  {
  public:
    AWS_MTURK_API QualificationRequirement() = default;
    AWS_MTURK_API QualificationRequirement(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API QualificationRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Qualification type for the requirement.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const { return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    template<typename QualificationTypeIdT = Aws::String>
    void SetQualificationTypeId(QualificationTypeIdT&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::forward<QualificationTypeIdT>(value); }
    template<typename QualificationTypeIdT = Aws::String>
    QualificationRequirement& WithQualificationTypeId(QualificationTypeIdT&& value) { SetQualificationTypeId(std::forward<QualificationTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kind of comparison to make against a Qualification's value. You can
     * compare a Qualification's value to an IntegerValue to see if it is LessThan,
     * LessThanOrEqualTo, GreaterThan, GreaterThanOrEqualTo, EqualTo, or NotEqualTo the
     * IntegerValue. You can compare it to a LocaleValue to see if it is EqualTo, or
     * NotEqualTo the LocaleValue. You can check to see if the value is In or NotIn a
     * set of IntegerValue or LocaleValue values. Lastly, a Qualification requirement
     * can also test if a Qualification Exists or DoesNotExist in the user's profile,
     * regardless of its value. </p>
     */
    inline Comparator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(Comparator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline QualificationRequirement& WithComparator(Comparator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The integer value to compare against the Qualification's value. IntegerValue
     * must not be present if Comparator is Exists or DoesNotExist. IntegerValue can
     * only be used if the Qualification type has an integer value; it cannot be used
     * with the Worker_Locale QualificationType ID. When performing a set comparison by
     * using the In or the NotIn comparator, you can use up to 15 IntegerValue elements
     * in a QualificationRequirement data structure. </p>
     */
    inline const Aws::Vector<int>& GetIntegerValues() const { return m_integerValues; }
    inline bool IntegerValuesHasBeenSet() const { return m_integerValuesHasBeenSet; }
    template<typename IntegerValuesT = Aws::Vector<int>>
    void SetIntegerValues(IntegerValuesT&& value) { m_integerValuesHasBeenSet = true; m_integerValues = std::forward<IntegerValuesT>(value); }
    template<typename IntegerValuesT = Aws::Vector<int>>
    QualificationRequirement& WithIntegerValues(IntegerValuesT&& value) { SetIntegerValues(std::forward<IntegerValuesT>(value)); return *this;}
    inline QualificationRequirement& AddIntegerValues(int value) { m_integerValuesHasBeenSet = true; m_integerValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The locale value to compare against the Qualification's value. The local
     * value must be a valid ISO 3166 country code or supports ISO 3166-2 subdivisions.
     * LocaleValue can only be used with a Worker_Locale QualificationType ID.
     * LocaleValue can only be used with the EqualTo, NotEqualTo, In, and NotIn
     * comparators. You must only use a single LocaleValue element when using the
     * EqualTo or NotEqualTo comparators. When performing a set comparison by using the
     * In or the NotIn comparator, you can use up to 30 LocaleValue elements in a
     * QualificationRequirement data structure. </p>
     */
    inline const Aws::Vector<Locale>& GetLocaleValues() const { return m_localeValues; }
    inline bool LocaleValuesHasBeenSet() const { return m_localeValuesHasBeenSet; }
    template<typename LocaleValuesT = Aws::Vector<Locale>>
    void SetLocaleValues(LocaleValuesT&& value) { m_localeValuesHasBeenSet = true; m_localeValues = std::forward<LocaleValuesT>(value); }
    template<typename LocaleValuesT = Aws::Vector<Locale>>
    QualificationRequirement& WithLocaleValues(LocaleValuesT&& value) { SetLocaleValues(std::forward<LocaleValuesT>(value)); return *this;}
    template<typename LocaleValuesT = Locale>
    QualificationRequirement& AddLocaleValues(LocaleValuesT&& value) { m_localeValuesHasBeenSet = true; m_localeValues.emplace_back(std::forward<LocaleValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Setting this attribute prevents Workers whose Qualifications do not meet
     * this QualificationRequirement from taking the specified action. Valid arguments
     * include "Accept" (Worker cannot accept the HIT, but can preview the HIT and see
     * it in their search results), "PreviewAndAccept" (Worker cannot accept or preview
     * the HIT, but can see the HIT in their search results), and
     * "DiscoverPreviewAndAccept" (Worker cannot accept, preview, or see the HIT in
     * their search results). It's possible for you to create a HIT with multiple
     * QualificationRequirements (which can have different values for the ActionGuarded
     * attribute). In this case, the Worker is only permitted to perform an action when
     * they have met all QualificationRequirements guarding the action. The actions in
     * the order of least restrictive to most restrictive are Discover, Preview and
     * Accept. For example, if a Worker meets all QualificationRequirements that are
     * set to DiscoverPreviewAndAccept, but do not meet all requirements that are set
     * with PreviewAndAccept, then the Worker will be able to Discover, i.e. see the
     * HIT in their search result, but will not be able to Preview or Accept the HIT.
     * ActionsGuarded should not be used in combination with the
     * <code>RequiredToPreview</code> field. </p>
     */
    inline HITAccessActions GetActionsGuarded() const { return m_actionsGuarded; }
    inline bool ActionsGuardedHasBeenSet() const { return m_actionsGuardedHasBeenSet; }
    inline void SetActionsGuarded(HITAccessActions value) { m_actionsGuardedHasBeenSet = true; m_actionsGuarded = value; }
    inline QualificationRequirement& WithActionsGuarded(HITAccessActions value) { SetActionsGuarded(value); return *this;}
    ///@}
  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Comparator m_comparator{Comparator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    Aws::Vector<int> m_integerValues;
    bool m_integerValuesHasBeenSet = false;

    Aws::Vector<Locale> m_localeValues;
    bool m_localeValuesHasBeenSet = false;

    HITAccessActions m_actionsGuarded{HITAccessActions::NOT_SET};
    bool m_actionsGuardedHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
