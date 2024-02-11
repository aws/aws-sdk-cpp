/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information for an Amazon Q index.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/NativeIndexConfiguration">AWS
   * API Reference</a></p>
   */
  class NativeIndexConfiguration
  {
  public:
    AWS_QBUSINESS_API NativeIndexConfiguration();
    AWS_QBUSINESS_API NativeIndexConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API NativeIndexConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline NativeIndexConfiguration& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline NativeIndexConfiguration& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline NativeIndexConfiguration& WithIndexId(const char* value) { SetIndexId(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
