/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>The shared Slurm key for authentication, also known as the <b>cluster
   * secret</b>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/SlurmAuthKey">AWS
   * API Reference</a></p>
   */
  class SlurmAuthKey
  {
  public:
    AWS_PCS_API SlurmAuthKey();
    AWS_PCS_API SlurmAuthKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API SlurmAuthKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the the shared Slurm key.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline SlurmAuthKey& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline SlurmAuthKey& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline SlurmAuthKey& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the shared Slurm key.</p>
     */
    inline const Aws::String& GetSecretVersion() const{ return m_secretVersion; }
    inline bool SecretVersionHasBeenSet() const { return m_secretVersionHasBeenSet; }
    inline void SetSecretVersion(const Aws::String& value) { m_secretVersionHasBeenSet = true; m_secretVersion = value; }
    inline void SetSecretVersion(Aws::String&& value) { m_secretVersionHasBeenSet = true; m_secretVersion = std::move(value); }
    inline void SetSecretVersion(const char* value) { m_secretVersionHasBeenSet = true; m_secretVersion.assign(value); }
    inline SlurmAuthKey& WithSecretVersion(const Aws::String& value) { SetSecretVersion(value); return *this;}
    inline SlurmAuthKey& WithSecretVersion(Aws::String&& value) { SetSecretVersion(std::move(value)); return *this;}
    inline SlurmAuthKey& WithSecretVersion(const char* value) { SetSecretVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_secretVersion;
    bool m_secretVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
