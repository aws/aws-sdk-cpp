/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The settings that you want to use for the Generative Q&amp;A
   * experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserGenerativeQnAEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class AnonymousUserGenerativeQnAEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AnonymousUserGenerativeQnAEmbeddingConfiguration();
    AWS_QUICKSIGHT_API AnonymousUserGenerativeQnAEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserGenerativeQnAEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline const Aws::String& GetInitialTopicId() const{ return m_initialTopicId; }

    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline bool InitialTopicIdHasBeenSet() const { return m_initialTopicIdHasBeenSet; }

    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline void SetInitialTopicId(const Aws::String& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = value; }

    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline void SetInitialTopicId(Aws::String&& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = std::move(value); }

    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline void SetInitialTopicId(const char* value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId.assign(value); }

    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline AnonymousUserGenerativeQnAEmbeddingConfiguration& WithInitialTopicId(const Aws::String& value) { SetInitialTopicId(value); return *this;}

    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline AnonymousUserGenerativeQnAEmbeddingConfiguration& WithInitialTopicId(Aws::String&& value) { SetInitialTopicId(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight Q topic ID of the new reader experience topic that you
     * want the anonymous user to see first. This ID is included in the output URL.
     * When the URL in response is accessed, Amazon QuickSight renders the Generative
     * Q&amp;A experience with this new reader experience topic pre selected.</p>
     * <p>The Amazon Resource Name (ARN) of this Q new reader experience topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request fails with an <code>InvalidParameterValueException</code> error.</p>
     */
    inline AnonymousUserGenerativeQnAEmbeddingConfiguration& WithInitialTopicId(const char* value) { SetInitialTopicId(value); return *this;}

  private:

    Aws::String m_initialTopicId;
    bool m_initialTopicIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
