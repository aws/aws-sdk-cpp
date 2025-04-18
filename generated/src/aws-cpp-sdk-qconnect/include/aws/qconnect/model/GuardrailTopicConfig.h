/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/GuardrailTopicType.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Details about topics for the AI Guardrail to identify and deny.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GuardrailTopicConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailTopicConfig
  {
  public:
    AWS_QCONNECT_API GuardrailTopicConfig() = default;
    AWS_QCONNECT_API GuardrailTopicConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GuardrailTopicConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic to deny.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GuardrailTopicConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A definition of the topic to deny.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    GuardrailTopicConfig& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of prompts, each of which is an example of a prompt that can be
     * categorized as belonging to the topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExamples() const { return m_examples; }
    inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
    template<typename ExamplesT = Aws::Vector<Aws::String>>
    void SetExamples(ExamplesT&& value) { m_examplesHasBeenSet = true; m_examples = std::forward<ExamplesT>(value); }
    template<typename ExamplesT = Aws::Vector<Aws::String>>
    GuardrailTopicConfig& WithExamples(ExamplesT&& value) { SetExamples(std::forward<ExamplesT>(value)); return *this;}
    template<typename ExamplesT = Aws::String>
    GuardrailTopicConfig& AddExamples(ExamplesT&& value) { m_examplesHasBeenSet = true; m_examples.emplace_back(std::forward<ExamplesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies to deny the topic.</p>
     */
    inline GuardrailTopicType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailTopicType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailTopicConfig& WithType(GuardrailTopicType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Vector<Aws::String> m_examples;
    bool m_examplesHasBeenSet = false;

    GuardrailTopicType m_type{GuardrailTopicType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
