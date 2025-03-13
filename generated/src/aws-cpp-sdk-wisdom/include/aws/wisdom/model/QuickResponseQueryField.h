/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/QuickResponseQueryOperator.h>
#include <aws/wisdom/model/Priority.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The quick response fields to query quick responses by.</p> <p>The following
   * is the list of supported field names.</p> <ul> <li> <p>content</p> </li> <li>
   * <p>name</p> </li> <li> <p>description</p> </li> <li> <p>shortcutKey</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QuickResponseQueryField">AWS
   * API Reference</a></p>
   */
  class QuickResponseQueryField
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API QuickResponseQueryField() = default;
    AWS_CONNECTWISDOMSERVICE_API QuickResponseQueryField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API QuickResponseQueryField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the query expects only exact matches on the attribute field values.
     * The results of the query will only include exact matches if this parameter is
     * set to false.</p>
     */
    inline bool GetAllowFuzziness() const { return m_allowFuzziness; }
    inline bool AllowFuzzinessHasBeenSet() const { return m_allowFuzzinessHasBeenSet; }
    inline void SetAllowFuzziness(bool value) { m_allowFuzzinessHasBeenSet = true; m_allowFuzziness = value; }
    inline QuickResponseQueryField& WithAllowFuzziness(bool value) { SetAllowFuzziness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QuickResponseQueryField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline QuickResponseQueryOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(QuickResponseQueryOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline QuickResponseQueryField& WithOperator(QuickResponseQueryOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline Priority GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(Priority value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline QuickResponseQueryField& WithPriority(Priority value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    QuickResponseQueryField& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    QuickResponseQueryField& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    bool m_allowFuzziness{false};
    bool m_allowFuzzinessHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QuickResponseQueryOperator m_operator{QuickResponseQueryOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Priority m_priority{Priority::NOT_SET};
    bool m_priorityHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
