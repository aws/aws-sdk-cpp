/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>A structure that can contain a value in multiple encoding
   * formats.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/ValueHolder">AWS
   * API Reference</a></p>
   */
  class ValueHolder
  {
  public:
    AWS_QLDBSESSION_API ValueHolder() = default;
    AWS_QLDBSESSION_API ValueHolder(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API ValueHolder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Ion binary value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetIonBinary() const { return m_ionBinary; }
    inline bool IonBinaryHasBeenSet() const { return m_ionBinaryHasBeenSet; }
    template<typename IonBinaryT = Aws::Utils::ByteBuffer>
    void SetIonBinary(IonBinaryT&& value) { m_ionBinaryHasBeenSet = true; m_ionBinary = std::forward<IonBinaryT>(value); }
    template<typename IonBinaryT = Aws::Utils::ByteBuffer>
    ValueHolder& WithIonBinary(IonBinaryT&& value) { SetIonBinary(std::forward<IonBinaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline const Aws::String& GetIonText() const { return m_ionText; }
    inline bool IonTextHasBeenSet() const { return m_ionTextHasBeenSet; }
    template<typename IonTextT = Aws::String>
    void SetIonText(IonTextT&& value) { m_ionTextHasBeenSet = true; m_ionText = std::forward<IonTextT>(value); }
    template<typename IonTextT = Aws::String>
    ValueHolder& WithIonText(IonTextT&& value) { SetIonText(std::forward<IonTextT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_ionBinary{};
    bool m_ionBinaryHasBeenSet = false;

    Aws::String m_ionText;
    bool m_ionTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
