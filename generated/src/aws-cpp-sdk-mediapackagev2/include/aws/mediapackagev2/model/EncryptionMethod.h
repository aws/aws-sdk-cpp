/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/TsEncryptionMethod.h>
#include <aws/mediapackagev2/model/CmafEncryptionMethod.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The encryption type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/EncryptionMethod">AWS
   * API Reference</a></p>
   */
  class EncryptionMethod
  {
  public:
    AWS_MEDIAPACKAGEV2_API EncryptionMethod();
    AWS_MEDIAPACKAGEV2_API EncryptionMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API EncryptionMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption method to use.</p>
     */
    inline const TsEncryptionMethod& GetTsEncryptionMethod() const{ return m_tsEncryptionMethod; }
    inline bool TsEncryptionMethodHasBeenSet() const { return m_tsEncryptionMethodHasBeenSet; }
    inline void SetTsEncryptionMethod(const TsEncryptionMethod& value) { m_tsEncryptionMethodHasBeenSet = true; m_tsEncryptionMethod = value; }
    inline void SetTsEncryptionMethod(TsEncryptionMethod&& value) { m_tsEncryptionMethodHasBeenSet = true; m_tsEncryptionMethod = std::move(value); }
    inline EncryptionMethod& WithTsEncryptionMethod(const TsEncryptionMethod& value) { SetTsEncryptionMethod(value); return *this;}
    inline EncryptionMethod& WithTsEncryptionMethod(TsEncryptionMethod&& value) { SetTsEncryptionMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption method to use.</p>
     */
    inline const CmafEncryptionMethod& GetCmafEncryptionMethod() const{ return m_cmafEncryptionMethod; }
    inline bool CmafEncryptionMethodHasBeenSet() const { return m_cmafEncryptionMethodHasBeenSet; }
    inline void SetCmafEncryptionMethod(const CmafEncryptionMethod& value) { m_cmafEncryptionMethodHasBeenSet = true; m_cmafEncryptionMethod = value; }
    inline void SetCmafEncryptionMethod(CmafEncryptionMethod&& value) { m_cmafEncryptionMethodHasBeenSet = true; m_cmafEncryptionMethod = std::move(value); }
    inline EncryptionMethod& WithCmafEncryptionMethod(const CmafEncryptionMethod& value) { SetCmafEncryptionMethod(value); return *this;}
    inline EncryptionMethod& WithCmafEncryptionMethod(CmafEncryptionMethod&& value) { SetCmafEncryptionMethod(std::move(value)); return *this;}
    ///@}
  private:

    TsEncryptionMethod m_tsEncryptionMethod;
    bool m_tsEncryptionMethodHasBeenSet = false;

    CmafEncryptionMethod m_cmafEncryptionMethod;
    bool m_cmafEncryptionMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
