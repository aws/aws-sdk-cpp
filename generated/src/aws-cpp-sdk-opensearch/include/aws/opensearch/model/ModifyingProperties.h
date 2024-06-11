﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PropertyValueType.h>
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
   * <p>Information about the domain properties that are currently being
   * modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ModifyingProperties">AWS
   * API Reference</a></p>
   */
  class ModifyingProperties
  {
  public:
    AWS_OPENSEARCHSERVICE_API ModifyingProperties();
    AWS_OPENSEARCHSERVICE_API ModifyingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ModifyingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property that is currently being modified.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ModifyingProperties& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ModifyingProperties& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ModifyingProperties& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the domain property that is being modified.</p>
     */
    inline const Aws::String& GetActiveValue() const{ return m_activeValue; }
    inline bool ActiveValueHasBeenSet() const { return m_activeValueHasBeenSet; }
    inline void SetActiveValue(const Aws::String& value) { m_activeValueHasBeenSet = true; m_activeValue = value; }
    inline void SetActiveValue(Aws::String&& value) { m_activeValueHasBeenSet = true; m_activeValue = std::move(value); }
    inline void SetActiveValue(const char* value) { m_activeValueHasBeenSet = true; m_activeValue.assign(value); }
    inline ModifyingProperties& WithActiveValue(const Aws::String& value) { SetActiveValue(value); return *this;}
    inline ModifyingProperties& WithActiveValue(Aws::String&& value) { SetActiveValue(std::move(value)); return *this;}
    inline ModifyingProperties& WithActiveValue(const char* value) { SetActiveValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that the property that is currently being modified will eventually
     * have.</p>
     */
    inline const Aws::String& GetPendingValue() const{ return m_pendingValue; }
    inline bool PendingValueHasBeenSet() const { return m_pendingValueHasBeenSet; }
    inline void SetPendingValue(const Aws::String& value) { m_pendingValueHasBeenSet = true; m_pendingValue = value; }
    inline void SetPendingValue(Aws::String&& value) { m_pendingValueHasBeenSet = true; m_pendingValue = std::move(value); }
    inline void SetPendingValue(const char* value) { m_pendingValueHasBeenSet = true; m_pendingValue.assign(value); }
    inline ModifyingProperties& WithPendingValue(const Aws::String& value) { SetPendingValue(value); return *this;}
    inline ModifyingProperties& WithPendingValue(Aws::String&& value) { SetPendingValue(std::move(value)); return *this;}
    inline ModifyingProperties& WithPendingValue(const char* value) { SetPendingValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of value that is currently being modified. Properties can have two
     * types:</p> <ul> <li> <p> <code>PLAIN_TEXT</code>: Contain direct values such as
     * "1", "True", or "c5.large.search".</p> </li> <li> <p>
     * <code>STRINGIFIED_JSON</code>: Contain content in JSON format, such as
     * {"Enabled":"True"}".</p> </li> </ul>
     */
    inline const PropertyValueType& GetValueType() const{ return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(const PropertyValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline void SetValueType(PropertyValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }
    inline ModifyingProperties& WithValueType(const PropertyValueType& value) { SetValueType(value); return *this;}
    inline ModifyingProperties& WithValueType(PropertyValueType&& value) { SetValueType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_activeValue;
    bool m_activeValueHasBeenSet = false;

    Aws::String m_pendingValue;
    bool m_pendingValueHasBeenSet = false;

    PropertyValueType m_valueType;
    bool m_valueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
