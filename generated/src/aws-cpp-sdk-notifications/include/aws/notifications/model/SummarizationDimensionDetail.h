/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Provides detailed information about the dimensions used for event
   * summarization and aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/SummarizationDimensionDetail">AWS
   * API Reference</a></p>
   */
  class SummarizationDimensionDetail
  {
  public:
    AWS_NOTIFICATIONS_API SummarizationDimensionDetail();
    AWS_NOTIFICATIONS_API SummarizationDimensionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API SummarizationDimensionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SummarizationDimensionDetail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SummarizationDimensionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SummarizationDimensionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SummarizationDimensionDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value of the property used to summarize aggregated events.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline SummarizationDimensionDetail& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline SummarizationDimensionDetail& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline SummarizationDimensionDetail& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
