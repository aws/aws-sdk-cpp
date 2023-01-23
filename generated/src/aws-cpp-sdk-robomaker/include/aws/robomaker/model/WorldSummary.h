/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a world.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/WorldSummary">AWS
   * API Reference</a></p>
   */
  class WorldSummary
  {
  public:
    AWS_ROBOMAKER_API WorldSummary();
    AWS_ROBOMAKER_API WorldSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API WorldSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline WorldSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline WorldSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world.</p>
     */
    inline WorldSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline WorldSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline WorldSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline const Aws::String& GetGenerationJob() const{ return m_generationJob; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline bool GenerationJobHasBeenSet() const { return m_generationJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline void SetGenerationJob(const Aws::String& value) { m_generationJobHasBeenSet = true; m_generationJob = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline void SetGenerationJob(Aws::String&& value) { m_generationJobHasBeenSet = true; m_generationJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline void SetGenerationJob(const char* value) { m_generationJobHasBeenSet = true; m_generationJob.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline WorldSummary& WithGenerationJob(const Aws::String& value) { SetGenerationJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline WorldSummary& WithGenerationJob(Aws::String&& value) { SetGenerationJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job.</p>
     */
    inline WorldSummary& WithGenerationJob(const char* value) { SetGenerationJob(value); return *this;}


    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline WorldSummary& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline WorldSummary& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline WorldSummary& WithTemplate(const char* value) { SetTemplate(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_generationJob;
    bool m_generationJobHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
