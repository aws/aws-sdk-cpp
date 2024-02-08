/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>A property change that was cancelled for an Amazon OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CancelledChangeProperty">AWS
   * API Reference</a></p>
   */
  class CancelledChangeProperty
  {
  public:
    AWS_OPENSEARCHSERVICE_API CancelledChangeProperty();
    AWS_OPENSEARCHSERVICE_API CancelledChangeProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API CancelledChangeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }

    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }

    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }

    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }

    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }

    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline CancelledChangeProperty& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}

    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline CancelledChangeProperty& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}

    /**
     * <p>The name of the property whose change was cancelled.</p>
     */
    inline CancelledChangeProperty& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}


    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline const Aws::String& GetCancelledValue() const{ return m_cancelledValue; }

    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline bool CancelledValueHasBeenSet() const { return m_cancelledValueHasBeenSet; }

    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline void SetCancelledValue(const Aws::String& value) { m_cancelledValueHasBeenSet = true; m_cancelledValue = value; }

    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline void SetCancelledValue(Aws::String&& value) { m_cancelledValueHasBeenSet = true; m_cancelledValue = std::move(value); }

    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline void SetCancelledValue(const char* value) { m_cancelledValueHasBeenSet = true; m_cancelledValue.assign(value); }

    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline CancelledChangeProperty& WithCancelledValue(const Aws::String& value) { SetCancelledValue(value); return *this;}

    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline CancelledChangeProperty& WithCancelledValue(Aws::String&& value) { SetCancelledValue(std::move(value)); return *this;}

    /**
     * <p>The pending value of the property that was cancelled. This would have been
     * the eventual value of the property if the chance had not been cancelled.</p>
     */
    inline CancelledChangeProperty& WithCancelledValue(const char* value) { SetCancelledValue(value); return *this;}


    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline const Aws::String& GetActiveValue() const{ return m_activeValue; }

    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline bool ActiveValueHasBeenSet() const { return m_activeValueHasBeenSet; }

    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline void SetActiveValue(const Aws::String& value) { m_activeValueHasBeenSet = true; m_activeValue = value; }

    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline void SetActiveValue(Aws::String&& value) { m_activeValueHasBeenSet = true; m_activeValue = std::move(value); }

    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline void SetActiveValue(const char* value) { m_activeValueHasBeenSet = true; m_activeValue.assign(value); }

    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline CancelledChangeProperty& WithActiveValue(const Aws::String& value) { SetActiveValue(value); return *this;}

    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline CancelledChangeProperty& WithActiveValue(Aws::String&& value) { SetActiveValue(std::move(value)); return *this;}

    /**
     * <p>The current value of the property, after the change was cancelled.</p>
     */
    inline CancelledChangeProperty& WithActiveValue(const char* value) { SetActiveValue(value); return *this;}

  private:

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;

    Aws::String m_cancelledValue;
    bool m_cancelledValueHasBeenSet = false;

    Aws::String m_activeValue;
    bool m_activeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
