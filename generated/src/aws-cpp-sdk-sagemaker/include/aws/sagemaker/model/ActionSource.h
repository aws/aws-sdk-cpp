/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A structure describing the source of an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ActionSource">AWS
   * API Reference</a></p>
   */
  class ActionSource
  {
  public:
    AWS_SAGEMAKER_API ActionSource();
    AWS_SAGEMAKER_API ActionSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ActionSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the source.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }

    /**
     * <p>The URI of the source.</p>
     */
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSourceUri(const Aws::String& value) { m_sourceUriHasBeenSet = true; m_sourceUri = value; }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSourceUri(Aws::String&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::move(value); }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSourceUri(const char* value) { m_sourceUriHasBeenSet = true; m_sourceUri.assign(value); }

    /**
     * <p>The URI of the source.</p>
     */
    inline ActionSource& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}

    /**
     * <p>The URI of the source.</p>
     */
    inline ActionSource& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the source.</p>
     */
    inline ActionSource& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}


    /**
     * <p>The type of the source.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of the source.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of the source.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of the source.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of the source.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The type of the source.</p>
     */
    inline ActionSource& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of the source.</p>
     */
    inline ActionSource& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the source.</p>
     */
    inline ActionSource& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The ID of the source.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    /**
     * <p>The ID of the source.</p>
     */
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }

    /**
     * <p>The ID of the source.</p>
     */
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    /**
     * <p>The ID of the source.</p>
     */
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }

    /**
     * <p>The ID of the source.</p>
     */
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }

    /**
     * <p>The ID of the source.</p>
     */
    inline ActionSource& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    /**
     * <p>The ID of the source.</p>
     */
    inline ActionSource& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source.</p>
     */
    inline ActionSource& WithSourceId(const char* value) { SetSourceId(value); return *this;}

  private:

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
