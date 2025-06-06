﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the contents of an email message, represented as a raw MIME
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RawEmail">AWS
   * API Reference</a></p>
   */
  class RawEmail
  {
  public:
    AWS_PINPOINT_API RawEmail() = default;
    AWS_PINPOINT_API RawEmail(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RawEmail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email message, represented as a raw MIME message. The entire message must
     * be base64 encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::ByteBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::ByteBuffer>
    RawEmail& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_data{};
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
