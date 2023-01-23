/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Source server CPU information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CPU">AWS API
   * Reference</a></p>
   */
  class CPU
  {
  public:
    AWS_MGN_API CPU();
    AWS_MGN_API CPU(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API CPU& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of CPU cores on the source server.</p>
     */
    inline long long GetCores() const{ return m_cores; }

    /**
     * <p>The number of CPU cores on the source server.</p>
     */
    inline bool CoresHasBeenSet() const { return m_coresHasBeenSet; }

    /**
     * <p>The number of CPU cores on the source server.</p>
     */
    inline void SetCores(long long value) { m_coresHasBeenSet = true; m_cores = value; }

    /**
     * <p>The number of CPU cores on the source server.</p>
     */
    inline CPU& WithCores(long long value) { SetCores(value); return *this;}


    /**
     * <p>The source server's CPU model name.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The source server's CPU model name.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The source server's CPU model name.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The source server's CPU model name.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The source server's CPU model name.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The source server's CPU model name.</p>
     */
    inline CPU& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The source server's CPU model name.</p>
     */
    inline CPU& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The source server's CPU model name.</p>
     */
    inline CPU& WithModelName(const char* value) { SetModelName(value); return *this;}

  private:

    long long m_cores;
    bool m_coresHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
