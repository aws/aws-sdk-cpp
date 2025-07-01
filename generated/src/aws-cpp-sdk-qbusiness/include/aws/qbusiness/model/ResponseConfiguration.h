/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/InstructionCollection.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration settings to define how Amazon Q Business generates and formats
   * responses to user queries. This includes customization options for response
   * style, tone, length, and other characteristics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ResponseConfiguration">AWS
   * API Reference</a></p>
   */
  class ResponseConfiguration
  {
  public:
    AWS_QBUSINESS_API ResponseConfiguration() = default;
    AWS_QBUSINESS_API ResponseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ResponseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of instructions that guide how Amazon Q Business generates
     * responses, including parameters for response length, target audience,
     * perspective, output style, identity, tone, and custom instructions.</p>
     */
    inline const InstructionCollection& GetInstructionCollection() const { return m_instructionCollection; }
    inline bool InstructionCollectionHasBeenSet() const { return m_instructionCollectionHasBeenSet; }
    template<typename InstructionCollectionT = InstructionCollection>
    void SetInstructionCollection(InstructionCollectionT&& value) { m_instructionCollectionHasBeenSet = true; m_instructionCollection = std::forward<InstructionCollectionT>(value); }
    template<typename InstructionCollectionT = InstructionCollection>
    ResponseConfiguration& WithInstructionCollection(InstructionCollectionT&& value) { SetInstructionCollection(std::forward<InstructionCollectionT>(value)); return *this;}
    ///@}
  private:

    InstructionCollection m_instructionCollection;
    bool m_instructionCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
