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
    AWS_CONNECTWISDOMSERVICE_API QuickResponseQueryField();
    AWS_CONNECTWISDOMSERVICE_API QuickResponseQueryField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API QuickResponseQueryField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the query expects only exact matches on the attribute field values.
     * The results of the query will only include exact matches if this parameter is
     * set to false.</p>
     */
    inline bool GetAllowFuzziness() const{ return m_allowFuzziness; }

    /**
     * <p>Whether the query expects only exact matches on the attribute field values.
     * The results of the query will only include exact matches if this parameter is
     * set to false.</p>
     */
    inline bool AllowFuzzinessHasBeenSet() const { return m_allowFuzzinessHasBeenSet; }

    /**
     * <p>Whether the query expects only exact matches on the attribute field values.
     * The results of the query will only include exact matches if this parameter is
     * set to false.</p>
     */
    inline void SetAllowFuzziness(bool value) { m_allowFuzzinessHasBeenSet = true; m_allowFuzziness = value; }

    /**
     * <p>Whether the query expects only exact matches on the attribute field values.
     * The results of the query will only include exact matches if this parameter is
     * set to false.</p>
     */
    inline QuickResponseQueryField& WithAllowFuzziness(bool value) { SetAllowFuzziness(value); return *this;}


    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline const QuickResponseQueryOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline void SetOperator(const QuickResponseQueryOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline void SetOperator(QuickResponseQueryOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline QuickResponseQueryField& WithOperator(const QuickResponseQueryOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline QuickResponseQueryField& WithOperator(QuickResponseQueryOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline const Priority& GetPriority() const{ return m_priority; }

    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline void SetPriority(const Priority& value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline void SetPriority(Priority&& value) { m_priorityHasBeenSet = true; m_priority = std::move(value); }

    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline QuickResponseQueryField& WithPriority(const Priority& value) { SetPriority(value); return *this;}

    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline QuickResponseQueryField& WithPriority(Priority&& value) { SetPriority(std::move(value)); return *this;}


    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of the attribute to query the quick responses by.</p>
     */
    inline QuickResponseQueryField& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    bool m_allowFuzziness;
    bool m_allowFuzzinessHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QuickResponseQueryOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Priority m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
