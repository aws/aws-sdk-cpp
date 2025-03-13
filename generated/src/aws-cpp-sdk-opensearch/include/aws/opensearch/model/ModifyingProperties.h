/**
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
    AWS_OPENSEARCHSERVICE_API ModifyingProperties() = default;
    AWS_OPENSEARCHSERVICE_API ModifyingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ModifyingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property that is currently being modified.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ModifyingProperties& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the domain property that is being modified.</p>
     */
    inline const Aws::String& GetActiveValue() const { return m_activeValue; }
    inline bool ActiveValueHasBeenSet() const { return m_activeValueHasBeenSet; }
    template<typename ActiveValueT = Aws::String>
    void SetActiveValue(ActiveValueT&& value) { m_activeValueHasBeenSet = true; m_activeValue = std::forward<ActiveValueT>(value); }
    template<typename ActiveValueT = Aws::String>
    ModifyingProperties& WithActiveValue(ActiveValueT&& value) { SetActiveValue(std::forward<ActiveValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that the property that is currently being modified will eventually
     * have.</p>
     */
    inline const Aws::String& GetPendingValue() const { return m_pendingValue; }
    inline bool PendingValueHasBeenSet() const { return m_pendingValueHasBeenSet; }
    template<typename PendingValueT = Aws::String>
    void SetPendingValue(PendingValueT&& value) { m_pendingValueHasBeenSet = true; m_pendingValue = std::forward<PendingValueT>(value); }
    template<typename PendingValueT = Aws::String>
    ModifyingProperties& WithPendingValue(PendingValueT&& value) { SetPendingValue(std::forward<PendingValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of value that is currently being modified. Properties can have two
     * types:</p> <ul> <li> <p> <code>PLAIN_TEXT</code>: Contain direct values such as
     * "1", "True", or "c5.large.search".</p> </li> <li> <p>
     * <code>STRINGIFIED_JSON</code>: Contain content in JSON format, such as
     * {"Enabled":"True"}".</p> </li> </ul>
     */
    inline PropertyValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(PropertyValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline ModifyingProperties& WithValueType(PropertyValueType value) { SetValueType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_activeValue;
    bool m_activeValueHasBeenSet = false;

    Aws::String m_pendingValue;
    bool m_pendingValueHasBeenSet = false;

    PropertyValueType m_valueType{PropertyValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
