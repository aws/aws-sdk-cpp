/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/Operator.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>MediaTailor only places (consumes) prefetched ads if the ad break meets the
   * criteria defined by the dynamic variables. This gives you granular control over
   * which ad break to place the prefetched ads into.</p> <p>As an example, let's say
   * that you set <code>DynamicVariable</code> to <code>scte.event_id</code> and
   * <code>Operator</code> to <code>EQUALS</code>, and your playback configuration
   * has an ADS URL of
   * <code>https://my.ads.server.com/path?&amp;podId=[scte.avail_num]&amp;event=[scte.event_id]&amp;duration=[session.avail_duration_secs]</code>.
   * And the prefetch request to the ADS contains these values
   * <code>https://my.ads.server.com/path?&amp;podId=3&amp;event=my-awesome-event&amp;duration=30</code>.
   * MediaTailor will only insert the prefetched ads into the ad break if has a SCTE
   * marker with an event id of <code>my-awesome-event</code>, since it must match
   * the event id that MediaTailor uses to query the ADS.</p> <p>You can specify up
   * to five <code>AvailMatchingCriteria</code>. If you specify multiple
   * <code>AvailMatchingCriteria</code>, MediaTailor combines them to match using a
   * logical <code>AND</code>. You can model logical <code>OR</code> combinations by
   * creating multiple prefetch schedules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AvailMatchingCriteria">AWS
   * API Reference</a></p>
   */
  class AvailMatchingCriteria
  {
  public:
    AWS_MEDIATAILOR_API AvailMatchingCriteria();
    AWS_MEDIATAILOR_API AvailMatchingCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AvailMatchingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline const Aws::String& GetDynamicVariable() const{ return m_dynamicVariable; }

    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline bool DynamicVariableHasBeenSet() const { return m_dynamicVariableHasBeenSet; }

    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline void SetDynamicVariable(const Aws::String& value) { m_dynamicVariableHasBeenSet = true; m_dynamicVariable = value; }

    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline void SetDynamicVariable(Aws::String&& value) { m_dynamicVariableHasBeenSet = true; m_dynamicVariable = std::move(value); }

    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline void SetDynamicVariable(const char* value) { m_dynamicVariableHasBeenSet = true; m_dynamicVariable.assign(value); }

    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline AvailMatchingCriteria& WithDynamicVariable(const Aws::String& value) { SetDynamicVariable(value); return *this;}

    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline AvailMatchingCriteria& WithDynamicVariable(Aws::String&& value) { SetDynamicVariable(std::move(value)); return *this;}

    /**
     * <p>The dynamic variable(s) that MediaTailor should use as avail matching
     * criteria. MediaTailor only places the prefetched ads into the avail if the avail
     * matches the criteria defined by the dynamic variable. For information about
     * dynamic variables, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">Using
     * dynamic ad variables</a> in the <i>MediaTailor User Guide</i>.</p> <p>You can
     * include up to 100 dynamic variables.</p>
     */
    inline AvailMatchingCriteria& WithDynamicVariable(const char* value) { SetDynamicVariable(value); return *this;}


    /**
     * <p>For the <code>DynamicVariable</code> specified in
     * <code>AvailMatchingCriteria</code>, the Operator that is used for the
     * comparison.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>For the <code>DynamicVariable</code> specified in
     * <code>AvailMatchingCriteria</code>, the Operator that is used for the
     * comparison.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>For the <code>DynamicVariable</code> specified in
     * <code>AvailMatchingCriteria</code>, the Operator that is used for the
     * comparison.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>For the <code>DynamicVariable</code> specified in
     * <code>AvailMatchingCriteria</code>, the Operator that is used for the
     * comparison.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>For the <code>DynamicVariable</code> specified in
     * <code>AvailMatchingCriteria</code>, the Operator that is used for the
     * comparison.</p>
     */
    inline AvailMatchingCriteria& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>For the <code>DynamicVariable</code> specified in
     * <code>AvailMatchingCriteria</code>, the Operator that is used for the
     * comparison.</p>
     */
    inline AvailMatchingCriteria& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::String m_dynamicVariable;
    bool m_dynamicVariableHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
