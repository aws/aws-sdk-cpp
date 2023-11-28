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
   * <p>Stores an Amazon Kendra index as a retriever.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/KendraIndexConfiguration">AWS
   * API Reference</a></p>
   */
  class KendraIndexConfiguration
  {
  public:
    AWS_QBUSINESS_API KendraIndexConfiguration();
    AWS_QBUSINESS_API KendraIndexConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API KendraIndexConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline KendraIndexConfiguration& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline KendraIndexConfiguration& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Kendra index.</p>
     */
    inline KendraIndexConfiguration& WithIndexId(const char* value) { SetIndexId(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
