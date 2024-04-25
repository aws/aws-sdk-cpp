/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineType.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class ValidateStateMachineDefinitionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API ValidateStateMachineDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateStateMachineDefinition"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline ValidateStateMachineDefinitionRequest& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline ValidateStateMachineDefinitionRequest& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The Amazon States Language definition of the state machine. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a> (ASL).</p>
     */
    inline ValidateStateMachineDefinitionRequest& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The target type of state machine for this definition. The default is
     * <code>STANDARD</code>.</p>
     */
    inline const StateMachineType& GetType() const{ return m_type; }

    /**
     * <p>The target type of state machine for this definition. The default is
     * <code>STANDARD</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The target type of state machine for this definition. The default is
     * <code>STANDARD</code>.</p>
     */
    inline void SetType(const StateMachineType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The target type of state machine for this definition. The default is
     * <code>STANDARD</code>.</p>
     */
    inline void SetType(StateMachineType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The target type of state machine for this definition. The default is
     * <code>STANDARD</code>.</p>
     */
    inline ValidateStateMachineDefinitionRequest& WithType(const StateMachineType& value) { SetType(value); return *this;}

    /**
     * <p>The target type of state machine for this definition. The default is
     * <code>STANDARD</code>.</p>
     */
    inline ValidateStateMachineDefinitionRequest& WithType(StateMachineType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    StateMachineType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
