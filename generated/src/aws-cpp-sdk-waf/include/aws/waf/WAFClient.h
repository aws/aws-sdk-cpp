/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/waf/WAFServiceClientModel.h>

namespace Aws
{
namespace WAF
{
  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>This is the <i>AWS WAF
   * Classic API Reference</i> for using AWS WAF Classic with Amazon CloudFront. The
   * AWS WAF Classic actions and data types listed in the reference are available for
   * protecting Amazon CloudFront distributions. You can use these actions and data
   * types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers
   * who need detailed information about the AWS WAF Classic API actions, data types,
   * and errors. For detailed information about AWS WAF Classic features and an
   * overview of how to use the AWS WAF Classic API, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p>
   */
  class AWS_WAF_API WAFClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WAFClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WAFClientConfiguration ClientConfigurationType;
      typedef WAFEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFClient(const Aws::WAF::WAFClientConfiguration& clientConfiguration = Aws::WAF::WAFClientConfiguration(),
                  std::shared_ptr<WAFEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<WAFEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::WAF::WAFClientConfiguration& clientConfiguration = Aws::WAF::WAFClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<WAFEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::WAF::WAFClientConfiguration& clientConfiguration = Aws::WAF::WAFClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WAFClient();

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>ByteMatchSet</code>. You then use <a>UpdateByteMatchSet</a> to identify
         * the part of a web request that you want AWS WAF to inspect, such as the values
         * of the <code>User-Agent</code> header or the query string. For example, you can
         * create a <code>ByteMatchSet</code> that matches any requests with
         * <code>User-Agent</code> headers that contain the string <code>BadBot</code>. You
         * can then configure AWS WAF to reject those requests.</p> <p>To create and
         * configure a <code>ByteMatchSet</code>, perform the following steps:</p> <ol>
         * <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of a <code>CreateByteMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateByteMatchSet</code> request.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateByteMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateByteMatchSet</a> request to specify the part of the request that you
         * want AWS WAF to inspect (for example, the header or the URI) and the value that
         * you want AWS WAF to watch for.</p> </li> </ol> <p>For more information about how
         * to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateByteMatchSetOutcome CreateByteMatchSet(const Model::CreateByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateByteMatchSetRequestT = Model::CreateByteMatchSetRequest>
        Model::CreateByteMatchSetOutcomeCallable CreateByteMatchSetCallable(const CreateByteMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateByteMatchSet, request);
        }

        /**
         * An Async wrapper for CreateByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateByteMatchSetRequestT = Model::CreateByteMatchSetRequest>
        void CreateByteMatchSetAsync(const CreateByteMatchSetRequestT& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateByteMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates an
         * <a>GeoMatchSet</a>, which you use to specify which web requests you want to
         * allow or block based on the country that the requests originate from. For
         * example, if you're receiving a lot of requests from one or more countries and
         * you want to block the requests, you can create an <code>GeoMatchSet</code> that
         * contains those countries and then configure AWS WAF to block the requests. </p>
         * <p>To create and configure a <code>GeoMatchSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the change token that
         * you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateGeoMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateGeoMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a> request.</p>
         * </li> <li> <p>Submit an <code>UpdateGeoMatchSetSet</code> request to specify the
         * countries that you want AWS WAF to watch for.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGeoMatchSetOutcome CreateGeoMatchSet(const Model::CreateGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGeoMatchSetRequestT = Model::CreateGeoMatchSetRequest>
        Model::CreateGeoMatchSetOutcomeCallable CreateGeoMatchSetCallable(const CreateGeoMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateGeoMatchSet, request);
        }

        /**
         * An Async wrapper for CreateGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGeoMatchSetRequestT = Model::CreateGeoMatchSetRequest>
        void CreateGeoMatchSetAsync(const CreateGeoMatchSetRequestT& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateGeoMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates an <a>IPSet</a>,
         * which you use to specify which web requests that you want to allow or block
         * based on the IP addresses that the requests originate from. For example, if
         * you're receiving a lot of requests from one or more individual IP addresses or
         * one or more ranges of IP addresses and you want to block the requests, you can
         * create an <code>IPSet</code> that contains those IP addresses and then configure
         * AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>IPSet</code>, perform the following steps:</p> <ol> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateIPSet</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateIPSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateIPSet</code> request to specify the IP addresses
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateIPSet">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;

        /**
         * A Callable wrapper for CreateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIPSetRequestT = Model::CreateIPSetRequest>
        Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const CreateIPSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateIPSet, request);
        }

        /**
         * An Async wrapper for CreateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIPSetRequestT = Model::CreateIPSetRequest>
        void CreateIPSetAsync(const CreateIPSetRequestT& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateIPSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <a>RateBasedRule</a>. The <code>RateBasedRule</code> contains a
         * <code>RateLimit</code>, which specifies the maximum number of requests that AWS
         * WAF allows from a specified IP address in a five-minute period. The
         * <code>RateBasedRule</code> also contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to count or block if these requests exceed the
         * <code>RateLimit</code>.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request not only must exceed the
         * <code>RateLimit</code>, but it also must match all the conditions to be counted
         * or blocked. For example, suppose you add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches
         * the IP address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 1,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that meet the conditions in the rule. For a request to be
         * blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code>. Further, requests that match these two conditions must be
         * received at a rate of more than 1,000 requests every five minutes. If both
         * conditions are met and the rate is exceeded, AWS WAF blocks the requests. If the
         * rate drops below 1,000 for a five-minute period, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 1,000.</p> <p>By adding this
         * <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit requests to
         * your login page without affecting the rest of your site.</p> <p>To create and
         * configure a <code>RateBasedRule</code>, perform the following steps:</p> <ol>
         * <li> <p>Create and update the predicates that you want to include in the rule.
         * For more information, see <a>CreateByteMatchSet</a>, <a>CreateIPSet</a>, and
         * <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a>
         * to get the change token that you provide in the <code>ChangeToken</code>
         * parameter of a <code>CreateRule</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateRateBasedRule</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRateBasedRule</code> request to specify the
         * predicates that you want to include in the rule.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RateBasedRule</code>. For
         * more information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRateBasedRuleOutcome CreateRateBasedRule(const Model::CreateRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRateBasedRuleRequestT = Model::CreateRateBasedRuleRequest>
        Model::CreateRateBasedRuleOutcomeCallable CreateRateBasedRuleCallable(const CreateRateBasedRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateRateBasedRule, request);
        }

        /**
         * An Async wrapper for CreateRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRateBasedRuleRequestT = Model::CreateRateBasedRuleRequest>
        void CreateRateBasedRuleAsync(const CreateRateBasedRuleRequestT& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateRateBasedRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <a>RegexMatchSet</a>. You then use <a>UpdateRegexMatchSet</a> to identify the
         * part of a web request that you want AWS WAF to inspect, such as the values of
         * the <code>User-Agent</code> header or the query string. For example, you can
         * create a <code>RegexMatchSet</code> that contains a <code>RegexMatchTuple</code>
         * that looks for any requests with <code>User-Agent</code> headers that match a
         * <code>RegexPatternSet</code> with pattern <code>B[a@]dB[o0]t</code>. You can
         * then configure AWS WAF to reject those requests.</p> <p>To create and configure
         * a <code>RegexMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateRegexMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateRegexMatchSet</a> request to specify the part of the request that you
         * want AWS WAF to inspect (for example, the header or the URI) and the value,
         * using a <code>RegexPatternSet</code>, that you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexMatchSetOutcome CreateRegexMatchSet(const Model::CreateRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegexMatchSetRequestT = Model::CreateRegexMatchSetRequest>
        Model::CreateRegexMatchSetOutcomeCallable CreateRegexMatchSetCallable(const CreateRegexMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateRegexMatchSet, request);
        }

        /**
         * An Async wrapper for CreateRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegexMatchSetRequestT = Model::CreateRegexMatchSetRequest>
        void CreateRegexMatchSetAsync(const CreateRegexMatchSetRequestT& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateRegexMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>RegexPatternSet</code>. You then use <a>UpdateRegexPatternSet</a> to
         * specify the regular expression (regex) pattern that you want AWS WAF to search
         * for, such as <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject
         * those requests.</p> <p>To create and configure a <code>RegexPatternSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateRegexPatternSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateRegexPatternSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateRegexPatternSet</a> request to
         * specify the string that you want AWS WAF to watch for.</p> </li> </ol> <p>For
         * more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexPatternSetOutcome CreateRegexPatternSet(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for CreateRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegexPatternSetRequestT = Model::CreateRegexPatternSetRequest>
        Model::CreateRegexPatternSetOutcomeCallable CreateRegexPatternSetCallable(const CreateRegexPatternSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateRegexPatternSet, request);
        }

        /**
         * An Async wrapper for CreateRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegexPatternSetRequestT = Model::CreateRegexPatternSetRequest>
        void CreateRegexPatternSetAsync(const CreateRegexPatternSetRequestT& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateRegexPatternSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>Rule</code>, which contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to block. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed
         * or blocked. For example, suppose that you add the following to a
         * <code>Rule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches the IP
         * address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>You then add the
         * <code>Rule</code> to a <code>WebACL</code> and specify that you want to blocks
         * requests that satisfy the <code>Rule</code>. For a request to be blocked, it
         * must come from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code>
         * header in the request must contain the value <code>BadBot</code>.</p> <p>To
         * create and configure a <code>Rule</code>, perform the following steps:</p> <ol>
         * <li> <p>Create and update the predicates that you want to include in the
         * <code>Rule</code>. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRule</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to specify the predicates that
         * you want to include in the <code>Rule</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>Rule</code>. For more
         * information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateRule">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateRule, request);
        }

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>RuleGroup</code>. A rule group is a collection of predefined rules that
         * you add to a web ACL. You use <a>UpdateRuleGroup</a> to add rules to the rule
         * group.</p> <p>Rule groups are subject to the following limits:</p> <ul> <li>
         * <p>Three rule groups per account. You can request an increase to this limit by
         * contacting customer support.</p> </li> <li> <p>One rule group per web ACL.</p>
         * </li> <li> <p>Ten rules per rule group.</p> </li> </ul> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupOutcome CreateRuleGroup(const Model::CreateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleGroupRequestT = Model::CreateRuleGroupRequest>
        Model::CreateRuleGroupOutcomeCallable CreateRuleGroupCallable(const CreateRuleGroupRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateRuleGroup, request);
        }

        /**
         * An Async wrapper for CreateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleGroupRequestT = Model::CreateRuleGroupRequest>
        void CreateRuleGroupAsync(const CreateRuleGroupRequestT& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateRuleGroup, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>SizeConstraintSet</code>. You then use <a>UpdateSizeConstraintSet</a> to
         * identify the part of a web request that you want AWS WAF to check for length,
         * such as the length of the <code>User-Agent</code> header or the length of the
         * query string. For example, you can create a <code>SizeConstraintSet</code> that
         * matches any requests that have a query string that is longer than 100 bytes. You
         * can then configure AWS WAF to reject those requests.</p> <p>To create and
         * configure a <code>SizeConstraintSet</code>, perform the following steps:</p>
         * <ol> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of a
         * <code>CreateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateSizeConstraintSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateSizeConstraintSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value that you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSizeConstraintSetOutcome CreateSizeConstraintSet(const Model::CreateSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for CreateSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSizeConstraintSetRequestT = Model::CreateSizeConstraintSetRequest>
        Model::CreateSizeConstraintSetOutcomeCallable CreateSizeConstraintSetCallable(const CreateSizeConstraintSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateSizeConstraintSet, request);
        }

        /**
         * An Async wrapper for CreateSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSizeConstraintSetRequestT = Model::CreateSizeConstraintSetRequest>
        void CreateSizeConstraintSetAsync(const CreateSizeConstraintSetRequestT& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateSizeConstraintSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <a>SqlInjectionMatchSet</a>, which you use to allow, block, or count requests
         * that contain snippets of SQL code in a specified part of web requests. AWS WAF
         * searches for character sequences that are likely to be malicious strings.</p>
         * <p>To create and configure a <code>SqlInjectionMatchSet</code>, perform the
         * following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateSqlInjectionMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateSqlInjectionMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateSqlInjectionMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <a>UpdateSqlInjectionMatchSet</a> request
         * to specify the parts of web requests in which you want to allow, block, or count
         * malicious SQL code.</p> </li> </ol> <p>For more information about how to use the
         * AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSqlInjectionMatchSetOutcome CreateSqlInjectionMatchSet(const Model::CreateSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSqlInjectionMatchSetRequestT = Model::CreateSqlInjectionMatchSetRequest>
        Model::CreateSqlInjectionMatchSetOutcomeCallable CreateSqlInjectionMatchSetCallable(const CreateSqlInjectionMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateSqlInjectionMatchSet, request);
        }

        /**
         * An Async wrapper for CreateSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSqlInjectionMatchSetRequestT = Model::CreateSqlInjectionMatchSetRequest>
        void CreateSqlInjectionMatchSetAsync(const CreateSqlInjectionMatchSetRequestT& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateSqlInjectionMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates a
         * <code>WebACL</code>, which contains the <code>Rules</code> that identify the
         * CloudFront web requests that you want to allow, block, or count. AWS WAF
         * evaluates <code>Rules</code> in order based on the value of
         * <code>Priority</code> for each <code>Rule</code>.</p> <p>You also specify a
         * default action, either <code>ALLOW</code> or <code>BLOCK</code>. If a web
         * request doesn't match any of the <code>Rules</code> in a <code>WebACL</code>,
         * AWS WAF responds to the request with the default action. </p> <p>To create and
         * configure a <code>WebACL</code>, perform the following steps:</p> <ol> <li>
         * <p>Create and update the <code>ByteMatchSet</code> objects and other predicates
         * that you want to include in <code>Rules</code>. For more information, see
         * <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>, <a>CreateIPSet</a>,
         * <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateWebACL</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateWebACL</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <a>UpdateWebACL</a> request to specify the <code>Rules</code>
         * that you want to include in the <code>WebACL</code>, to specify the default
         * action, and to associate the <code>WebACL</code> with a CloudFront
         * distribution.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebACLOutcome CreateWebACL(const Model::CreateWebACLRequest& request) const;

        /**
         * A Callable wrapper for CreateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWebACLRequestT = Model::CreateWebACLRequest>
        Model::CreateWebACLOutcomeCallable CreateWebACLCallable(const CreateWebACLRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateWebACL, request);
        }

        /**
         * An Async wrapper for CreateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWebACLRequestT = Model::CreateWebACLRequest>
        void CreateWebACLAsync(const CreateWebACLRequestT& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateWebACL, request, handler, context);
        }

        /**
         * <p>Creates an AWS CloudFormation WAFV2 template for the specified web ACL in the
         * specified Amazon S3 bucket. Then, in CloudFormation, you create a stack from the
         * template, to create the web ACL and its resources in AWS WAFV2. Use this to
         * migrate your AWS WAF Classic web ACL to the latest version of AWS WAF.</p>
         * <p>This is part of a larger migration procedure for web ACLs from AWS WAF
         * Classic to the latest version of AWS WAF. For the full procedure, including
         * caveats and manual steps to complete the migration and switch over to the new
         * web ACL, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-migrating-from-classic.html">Migrating
         * your AWS WAF Classic resources to AWS WAF</a> in the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateWebACLMigrationStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebACLMigrationStackOutcome CreateWebACLMigrationStack(const Model::CreateWebACLMigrationStackRequest& request) const;

        /**
         * A Callable wrapper for CreateWebACLMigrationStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWebACLMigrationStackRequestT = Model::CreateWebACLMigrationStackRequest>
        Model::CreateWebACLMigrationStackOutcomeCallable CreateWebACLMigrationStackCallable(const CreateWebACLMigrationStackRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateWebACLMigrationStack, request);
        }

        /**
         * An Async wrapper for CreateWebACLMigrationStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWebACLMigrationStackRequestT = Model::CreateWebACLMigrationStackRequest>
        void CreateWebACLMigrationStackAsync(const CreateWebACLMigrationStackRequestT& request, const CreateWebACLMigrationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateWebACLMigrationStack, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Creates an
         * <a>XssMatchSet</a>, which you use to allow, block, or count requests that
         * contain cross-site scripting attacks in the specified part of web requests. AWS
         * WAF searches for character sequences that are likely to be malicious
         * strings.</p> <p>To create and configure an <code>XssMatchSet</code>, perform the
         * following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateXssMatchSet</a> request.</p>
         * </li> <li> <p>Submit an <a>UpdateXssMatchSet</a> request to specify the parts of
         * web requests in which you want to allow, block, or count cross-site scripting
         * attacks.</p> </li> </ol> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/CreateXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateXssMatchSetOutcome CreateXssMatchSet(const Model::CreateXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for CreateXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateXssMatchSetRequestT = Model::CreateXssMatchSetRequest>
        Model::CreateXssMatchSetOutcomeCallable CreateXssMatchSetCallable(const CreateXssMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::CreateXssMatchSet, request);
        }

        /**
         * An Async wrapper for CreateXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateXssMatchSetRequestT = Model::CreateXssMatchSetRequest>
        void CreateXssMatchSetAsync(const CreateXssMatchSetRequestT& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::CreateXssMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>ByteMatchSet</a>. You can't delete a <code>ByteMatchSet</code> if it's still
         * used in any <code>Rules</code> or if it still includes any <a>ByteMatchTuple</a>
         * objects (any filters).</p> <p>If you just want to remove a
         * <code>ByteMatchSet</code> from a <code>Rule</code>, use <a>UpdateRule</a>.</p>
         * <p>To permanently delete a <code>ByteMatchSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Update the <code>ByteMatchSet</code> to remove filters,
         * if any. For more information, see <a>UpdateByteMatchSet</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteByteMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteByteMatchSet</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteByteMatchSetOutcome DeleteByteMatchSet(const Model::DeleteByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteByteMatchSetRequestT = Model::DeleteByteMatchSetRequest>
        Model::DeleteByteMatchSetOutcomeCallable DeleteByteMatchSetCallable(const DeleteByteMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteByteMatchSet, request);
        }

        /**
         * An Async wrapper for DeleteByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteByteMatchSetRequestT = Model::DeleteByteMatchSetRequest>
        void DeleteByteMatchSetAsync(const DeleteByteMatchSetRequestT& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteByteMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>GeoMatchSet</a>. You can't delete a <code>GeoMatchSet</code> if it's still
         * used in any <code>Rules</code> or if it still includes any countries.</p> <p>If
         * you just want to remove a <code>GeoMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a <code>GeoMatchSet</code> from
         * AWS WAF, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>GeoMatchSet</code> to remove any countries. For more information, see
         * <a>UpdateGeoMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteGeoMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteGeoMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGeoMatchSetOutcome DeleteGeoMatchSet(const Model::DeleteGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGeoMatchSetRequestT = Model::DeleteGeoMatchSetRequest>
        Model::DeleteGeoMatchSetOutcomeCallable DeleteGeoMatchSetCallable(const DeleteGeoMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteGeoMatchSet, request);
        }

        /**
         * An Async wrapper for DeleteGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGeoMatchSetRequestT = Model::DeleteGeoMatchSetRequest>
        void DeleteGeoMatchSetAsync(const DeleteGeoMatchSetRequestT& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteGeoMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes an
         * <a>IPSet</a>. You can't delete an <code>IPSet</code> if it's still used in any
         * <code>Rules</code> or if it still includes any IP addresses.</p> <p>If you just
         * want to remove an <code>IPSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete an <code>IPSet</code> from AWS
         * WAF, perform the following steps:</p> <ol> <li> <p>Update the <code>IPSet</code>
         * to remove IP address ranges, if any. For more information, see
         * <a>UpdateIPSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteIPSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteIPSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteIPSet">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIPSetRequestT = Model::DeleteIPSetRequest>
        Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const DeleteIPSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteIPSet, request);
        }

        /**
         * An Async wrapper for DeleteIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIPSetRequestT = Model::DeleteIPSetRequest>
        void DeleteIPSetAsync(const DeleteIPSetRequestT& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteIPSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes the
         * <a>LoggingConfiguration</a> from the specified web ACL.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLoggingConfigurationRequestT = Model::DeleteLoggingConfigurationRequest>
        Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLoggingConfigurationRequestT = Model::DeleteLoggingConfigurationRequest>
        void DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequestT& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteLoggingConfiguration, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes an
         * IAM policy from the specified RuleGroup.</p> <p>The user making the request must
         * be the owner of the RuleGroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionPolicyOutcome DeletePermissionPolicy(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePermissionPolicyRequestT = Model::DeletePermissionPolicyRequest>
        Model::DeletePermissionPolicyOutcomeCallable DeletePermissionPolicyCallable(const DeletePermissionPolicyRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeletePermissionPolicy, request);
        }

        /**
         * An Async wrapper for DeletePermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePermissionPolicyRequestT = Model::DeletePermissionPolicyRequest>
        void DeletePermissionPolicyAsync(const DeletePermissionPolicyRequestT& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeletePermissionPolicy, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RateBasedRule</a>. You can't delete a rule if it's still used in any
         * <code>WebACL</code> objects or if it still includes any predicates, such as
         * <code>ByteMatchSet</code> objects.</p> <p>If you just want to remove a rule from
         * a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p> <p>To permanently delete a
         * <code>RateBasedRule</code> from AWS WAF, perform the following steps:</p> <ol>
         * <li> <p>Update the <code>RateBasedRule</code> to remove predicates, if any. For
         * more information, see <a>UpdateRateBasedRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteRateBasedRule</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRateBasedRule</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRateBasedRuleOutcome DeleteRateBasedRule(const Model::DeleteRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRateBasedRuleRequestT = Model::DeleteRateBasedRuleRequest>
        Model::DeleteRateBasedRuleOutcomeCallable DeleteRateBasedRuleCallable(const DeleteRateBasedRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteRateBasedRule, request);
        }

        /**
         * An Async wrapper for DeleteRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRateBasedRuleRequestT = Model::DeleteRateBasedRuleRequest>
        void DeleteRateBasedRuleAsync(const DeleteRateBasedRuleRequestT& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteRateBasedRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RegexMatchSet</a>. You can't delete a <code>RegexMatchSet</code> if it's
         * still used in any <code>Rules</code> or if it still includes any
         * <code>RegexMatchTuples</code> objects (any filters).</p> <p>If you just want to
         * remove a <code>RegexMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a <code>RegexMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Update the
         * <code>RegexMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateRegexMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRegexMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexMatchSetOutcome DeleteRegexMatchSet(const Model::DeleteRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegexMatchSetRequestT = Model::DeleteRegexMatchSetRequest>
        Model::DeleteRegexMatchSetOutcomeCallable DeleteRegexMatchSetCallable(const DeleteRegexMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteRegexMatchSet, request);
        }

        /**
         * An Async wrapper for DeleteRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegexMatchSetRequestT = Model::DeleteRegexMatchSetRequest>
        void DeleteRegexMatchSetAsync(const DeleteRegexMatchSetRequestT& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteRegexMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RegexPatternSet</a>. You can't delete a <code>RegexPatternSet</code> if it's
         * still used in any <code>RegexMatchSet</code> or if the
         * <code>RegexPatternSet</code> is not empty. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexPatternSetOutcome DeleteRegexPatternSet(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegexPatternSetRequestT = Model::DeleteRegexPatternSetRequest>
        Model::DeleteRegexPatternSetOutcomeCallable DeleteRegexPatternSetCallable(const DeleteRegexPatternSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteRegexPatternSet, request);
        }

        /**
         * An Async wrapper for DeleteRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegexPatternSetRequestT = Model::DeleteRegexPatternSetRequest>
        void DeleteRegexPatternSetAsync(const DeleteRegexPatternSetRequestT& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteRegexPatternSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>Rule</a>. You can't delete a <code>Rule</code> if it's still used in any
         * <code>WebACL</code> objects or if it still includes any predicates, such as
         * <code>ByteMatchSet</code> objects.</p> <p>If you just want to remove a
         * <code>Rule</code> from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p> <p>To
         * permanently delete a <code>Rule</code> from AWS WAF, perform the following
         * steps:</p> <ol> <li> <p>Update the <code>Rule</code> to remove predicates, if
         * any. For more information, see <a>UpdateRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteRule</code> request.</p>
         * </li> <li> <p>Submit a <code>DeleteRule</code> request.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteRule">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>RuleGroup</a>. You can't delete a <code>RuleGroup</code> if it's still used
         * in any <code>WebACL</code> objects or if it still includes any rules.</p> <p>If
         * you just want to remove a <code>RuleGroup</code> from a <code>WebACL</code>, use
         * <a>UpdateWebACL</a>.</p> <p>To permanently delete a <code>RuleGroup</code> from
         * AWS WAF, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>RuleGroup</code> to remove rules, if any. For more information, see
         * <a>UpdateRuleGroup</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteRuleGroup</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRuleGroup</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleGroupRequestT = Model::DeleteRuleGroupRequest>
        Model::DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const DeleteRuleGroupRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteRuleGroup, request);
        }

        /**
         * An Async wrapper for DeleteRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleGroupRequestT = Model::DeleteRuleGroupRequest>
        void DeleteRuleGroupAsync(const DeleteRuleGroupRequestT& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteRuleGroup, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>SizeConstraintSet</a>. You can't delete a <code>SizeConstraintSet</code> if
         * it's still used in any <code>Rules</code> or if it still includes any
         * <a>SizeConstraint</a> objects (any filters).</p> <p>If you just want to remove a
         * <code>SizeConstraintSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>SizeConstraintSet</code> to remove filters, if any. For more
         * information, see <a>UpdateSizeConstraintSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSizeConstraintSetOutcome DeleteSizeConstraintSet(const Model::DeleteSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSizeConstraintSetRequestT = Model::DeleteSizeConstraintSetRequest>
        Model::DeleteSizeConstraintSetOutcomeCallable DeleteSizeConstraintSetCallable(const DeleteSizeConstraintSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteSizeConstraintSet, request);
        }

        /**
         * An Async wrapper for DeleteSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSizeConstraintSetRequestT = Model::DeleteSizeConstraintSetRequest>
        void DeleteSizeConstraintSetAsync(const DeleteSizeConstraintSetRequestT& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteSizeConstraintSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>SqlInjectionMatchSet</a>. You can't delete a
         * <code>SqlInjectionMatchSet</code> if it's still used in any <code>Rules</code>
         * or if it still contains any <a>SqlInjectionMatchTuple</a> objects.</p> <p>If you
         * just want to remove a <code>SqlInjectionMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SqlInjectionMatchSet</code> from AWS WAF, perform the following steps:</p>
         * <ol> <li> <p>Update the <code>SqlInjectionMatchSet</code> to remove filters, if
         * any. For more information, see <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSqlInjectionMatchSetOutcome DeleteSqlInjectionMatchSet(const Model::DeleteSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSqlInjectionMatchSetRequestT = Model::DeleteSqlInjectionMatchSetRequest>
        Model::DeleteSqlInjectionMatchSetOutcomeCallable DeleteSqlInjectionMatchSetCallable(const DeleteSqlInjectionMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteSqlInjectionMatchSet, request);
        }

        /**
         * An Async wrapper for DeleteSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSqlInjectionMatchSetRequestT = Model::DeleteSqlInjectionMatchSetRequest>
        void DeleteSqlInjectionMatchSetAsync(const DeleteSqlInjectionMatchSetRequestT& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteSqlInjectionMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes a
         * <a>WebACL</a>. You can't delete a <code>WebACL</code> if it still contains any
         * <code>Rules</code>.</p> <p>To delete a <code>WebACL</code>, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>WebACL</code> to remove
         * <code>Rules</code>, if any. For more information, see <a>UpdateWebACL</a>.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of a <code>DeleteWebACL</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteWebACL</code> request.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebACLOutcome DeleteWebACL(const Model::DeleteWebACLRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWebACLRequestT = Model::DeleteWebACLRequest>
        Model::DeleteWebACLOutcomeCallable DeleteWebACLCallable(const DeleteWebACLRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteWebACL, request);
        }

        /**
         * An Async wrapper for DeleteWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWebACLRequestT = Model::DeleteWebACLRequest>
        void DeleteWebACLAsync(const DeleteWebACLRequestT& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteWebACL, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Permanently deletes an
         * <a>XssMatchSet</a>. You can't delete an <code>XssMatchSet</code> if it's still
         * used in any <code>Rules</code> or if it still contains any <a>XssMatchTuple</a>
         * objects.</p> <p>If you just want to remove an <code>XssMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete an
         * <code>XssMatchSet</code> from AWS WAF, perform the following steps:</p> <ol>
         * <li> <p>Update the <code>XssMatchSet</code> to remove filters, if any. For more
         * information, see <a>UpdateXssMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteXssMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteXssMatchSet</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/DeleteXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteXssMatchSetOutcome DeleteXssMatchSet(const Model::DeleteXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteXssMatchSetRequestT = Model::DeleteXssMatchSetRequest>
        Model::DeleteXssMatchSetOutcomeCallable DeleteXssMatchSetCallable(const DeleteXssMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::DeleteXssMatchSet, request);
        }

        /**
         * An Async wrapper for DeleteXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteXssMatchSetRequestT = Model::DeleteXssMatchSetRequest>
        void DeleteXssMatchSetAsync(const DeleteXssMatchSetRequestT& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::DeleteXssMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>ByteMatchSet</a> specified by <code>ByteMatchSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetByteMatchSetOutcome GetByteMatchSet(const Model::GetByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetByteMatchSetRequestT = Model::GetByteMatchSetRequest>
        Model::GetByteMatchSetOutcomeCallable GetByteMatchSetCallable(const GetByteMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetByteMatchSet, request);
        }

        /**
         * An Async wrapper for GetByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetByteMatchSetRequestT = Model::GetByteMatchSetRequest>
        void GetByteMatchSetAsync(const GetByteMatchSetRequestT& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetByteMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>When you want to create,
         * update, or delete AWS WAF objects, get a change token and include the change
         * token in the create, update, or delete request. Change tokens ensure that your
         * application doesn't submit conflicting requests to AWS WAF.</p> <p>Each create,
         * update, or delete request must use a unique change token. If your application
         * submits a <code>GetChangeToken</code> request and then submits a second
         * <code>GetChangeToken</code> request before submitting a create, update, or
         * delete request, the second <code>GetChangeToken</code> request returns the same
         * value as the first <code>GetChangeToken</code> request.</p> <p>When you use a
         * change token in a create, update, or delete request, the status of the change
         * token changes to <code>PENDING</code>, which indicates that AWS WAF is
         * propagating the change to all AWS WAF servers. Use
         * <code>GetChangeTokenStatus</code> to determine the status of your change
         * token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetChangeToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeTokenOutcome GetChangeToken(const Model::GetChangeTokenRequest& request) const;

        /**
         * A Callable wrapper for GetChangeToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChangeTokenRequestT = Model::GetChangeTokenRequest>
        Model::GetChangeTokenOutcomeCallable GetChangeTokenCallable(const GetChangeTokenRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetChangeToken, request);
        }

        /**
         * An Async wrapper for GetChangeToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChangeTokenRequestT = Model::GetChangeTokenRequest>
        void GetChangeTokenAsync(const GetChangeTokenRequestT& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetChangeToken, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the status of a
         * <code>ChangeToken</code> that you got by calling <a>GetChangeToken</a>.
         * <code>ChangeTokenStatus</code> is one of the following values:</p> <ul> <li> <p>
         * <code>PROVISIONED</code>: You requested the change token by calling
         * <code>GetChangeToken</code>, but you haven't used it yet in a call to create,
         * update, or delete an AWS WAF object.</p> </li> <li> <p> <code>PENDING</code>:
         * AWS WAF is propagating the create, update, or delete request to all AWS WAF
         * servers.</p> </li> <li> <p> <code>INSYNC</code>: Propagation is complete.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetChangeTokenStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeTokenStatusOutcome GetChangeTokenStatus(const Model::GetChangeTokenStatusRequest& request) const;

        /**
         * A Callable wrapper for GetChangeTokenStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChangeTokenStatusRequestT = Model::GetChangeTokenStatusRequest>
        Model::GetChangeTokenStatusOutcomeCallable GetChangeTokenStatusCallable(const GetChangeTokenStatusRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetChangeTokenStatus, request);
        }

        /**
         * An Async wrapper for GetChangeTokenStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChangeTokenStatusRequestT = Model::GetChangeTokenStatusRequest>
        void GetChangeTokenStatusAsync(const GetChangeTokenStatusRequestT& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetChangeTokenStatus, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>GeoMatchSet</a> that is specified by
         * <code>GeoMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeoMatchSetOutcome GetGeoMatchSet(const Model::GetGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGeoMatchSetRequestT = Model::GetGeoMatchSetRequest>
        Model::GetGeoMatchSetOutcomeCallable GetGeoMatchSetCallable(const GetGeoMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetGeoMatchSet, request);
        }

        /**
         * An Async wrapper for GetGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGeoMatchSetRequestT = Model::GetGeoMatchSetRequest>
        void GetGeoMatchSetAsync(const GetGeoMatchSetRequestT& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetGeoMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the <a>IPSet</a>
         * that is specified by <code>IPSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetIPSet">AWS API
         * Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * A Callable wrapper for GetIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIPSetRequestT = Model::GetIPSetRequest>
        Model::GetIPSetOutcomeCallable GetIPSetCallable(const GetIPSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetIPSet, request);
        }

        /**
         * An Async wrapper for GetIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIPSetRequestT = Model::GetIPSetRequest>
        void GetIPSetAsync(const GetIPSetRequestT& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetIPSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>LoggingConfiguration</a> for the specified web ACL.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingConfigurationOutcome GetLoggingConfiguration(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoggingConfigurationRequestT = Model::GetLoggingConfigurationRequest>
        Model::GetLoggingConfigurationOutcomeCallable GetLoggingConfigurationCallable(const GetLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for GetLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoggingConfigurationRequestT = Model::GetLoggingConfigurationRequest>
        void GetLoggingConfigurationAsync(const GetLoggingConfigurationRequestT& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetLoggingConfiguration, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the IAM policy
         * attached to the RuleGroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionPolicyOutcome GetPermissionPolicy(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPermissionPolicyRequestT = Model::GetPermissionPolicyRequest>
        Model::GetPermissionPolicyOutcomeCallable GetPermissionPolicyCallable(const GetPermissionPolicyRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetPermissionPolicy, request);
        }

        /**
         * An Async wrapper for GetPermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPermissionPolicyRequestT = Model::GetPermissionPolicyRequest>
        void GetPermissionPolicyAsync(const GetPermissionPolicyRequestT& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetPermissionPolicy, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RateBasedRule</a> that is specified by the <code>RuleId</code> that you
         * included in the <code>GetRateBasedRule</code> request.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedRuleOutcome GetRateBasedRule(const Model::GetRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for GetRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRateBasedRuleRequestT = Model::GetRateBasedRuleRequest>
        Model::GetRateBasedRuleOutcomeCallable GetRateBasedRuleCallable(const GetRateBasedRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetRateBasedRule, request);
        }

        /**
         * An Async wrapper for GetRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRateBasedRuleRequestT = Model::GetRateBasedRuleRequest>
        void GetRateBasedRuleAsync(const GetRateBasedRuleRequestT& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetRateBasedRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of IP
         * addresses currently being blocked by the <a>RateBasedRule</a> that is specified
         * by the <code>RuleId</code>. The maximum number of managed keys that will be
         * blocked is 10,000. If more than 10,000 addresses exceed the rate limit, the
         * 10,000 addresses with the highest rates will be blocked.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetRateBasedRuleManagedKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedRuleManagedKeysOutcome GetRateBasedRuleManagedKeys(const Model::GetRateBasedRuleManagedKeysRequest& request) const;

        /**
         * A Callable wrapper for GetRateBasedRuleManagedKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRateBasedRuleManagedKeysRequestT = Model::GetRateBasedRuleManagedKeysRequest>
        Model::GetRateBasedRuleManagedKeysOutcomeCallable GetRateBasedRuleManagedKeysCallable(const GetRateBasedRuleManagedKeysRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetRateBasedRuleManagedKeys, request);
        }

        /**
         * An Async wrapper for GetRateBasedRuleManagedKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRateBasedRuleManagedKeysRequestT = Model::GetRateBasedRuleManagedKeysRequest>
        void GetRateBasedRuleManagedKeysAsync(const GetRateBasedRuleManagedKeysRequestT& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetRateBasedRuleManagedKeys, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RegexMatchSet</a> specified by <code>RegexMatchSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexMatchSetOutcome GetRegexMatchSet(const Model::GetRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegexMatchSetRequestT = Model::GetRegexMatchSetRequest>
        Model::GetRegexMatchSetOutcomeCallable GetRegexMatchSetCallable(const GetRegexMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetRegexMatchSet, request);
        }

        /**
         * An Async wrapper for GetRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegexMatchSetRequestT = Model::GetRegexMatchSetRequest>
        void GetRegexMatchSetAsync(const GetRegexMatchSetRequestT& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetRegexMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RegexPatternSet</a> specified by
         * <code>RegexPatternSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexPatternSetOutcome GetRegexPatternSet(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for GetRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegexPatternSetRequestT = Model::GetRegexPatternSetRequest>
        Model::GetRegexPatternSetOutcomeCallable GetRegexPatternSetCallable(const GetRegexPatternSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetRegexPatternSet, request);
        }

        /**
         * An Async wrapper for GetRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegexPatternSetRequestT = Model::GetRegexPatternSetRequest>
        void GetRegexPatternSetAsync(const GetRegexPatternSetRequestT& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetRegexPatternSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the <a>Rule</a>
         * that is specified by the <code>RuleId</code> that you included in the
         * <code>GetRule</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetRule">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;

        /**
         * A Callable wrapper for GetRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        Model::GetRuleOutcomeCallable GetRuleCallable(const GetRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetRule, request);
        }

        /**
         * An Async wrapper for GetRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        void GetRuleAsync(const GetRuleRequestT& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>RuleGroup</a> that is specified by the <code>RuleGroupId</code> that you
         * included in the <code>GetRuleGroup</code> request.</p> <p>To view the rules in a
         * rule group, use <a>ListActivatedRulesInRuleGroup</a>.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleGroupOutcome GetRuleGroup(const Model::GetRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for GetRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRuleGroupRequestT = Model::GetRuleGroupRequest>
        Model::GetRuleGroupOutcomeCallable GetRuleGroupCallable(const GetRuleGroupRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetRuleGroup, request);
        }

        /**
         * An Async wrapper for GetRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRuleGroupRequestT = Model::GetRuleGroupRequest>
        void GetRuleGroupAsync(const GetRuleGroupRequestT& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetRuleGroup, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Gets detailed information
         * about a specified number of requests--a sample--that AWS WAF randomly selects
         * from among the first 5,000 requests that your AWS resource received during a
         * time range that you choose. You can specify a sample size of up to 500 requests,
         * and you can specify any time range in the previous three hours.</p> <p>
         * <code>GetSampledRequests</code> returns a time range, which is usually the time
         * range that you specified. However, if your resource (such as a CloudFront
         * distribution) received 5,000 requests before the specified time range elapsed,
         * <code>GetSampledRequests</code> returns an updated time range. This new time
         * range indicates the actual period during which AWS WAF selected the requests in
         * the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetSampledRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSampledRequestsOutcome GetSampledRequests(const Model::GetSampledRequestsRequest& request) const;

        /**
         * A Callable wrapper for GetSampledRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSampledRequestsRequestT = Model::GetSampledRequestsRequest>
        Model::GetSampledRequestsOutcomeCallable GetSampledRequestsCallable(const GetSampledRequestsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetSampledRequests, request);
        }

        /**
         * An Async wrapper for GetSampledRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSampledRequestsRequestT = Model::GetSampledRequestsRequest>
        void GetSampledRequestsAsync(const GetSampledRequestsRequestT& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetSampledRequests, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>SizeConstraintSet</a> specified by
         * <code>SizeConstraintSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSizeConstraintSetOutcome GetSizeConstraintSet(const Model::GetSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for GetSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSizeConstraintSetRequestT = Model::GetSizeConstraintSetRequest>
        Model::GetSizeConstraintSetOutcomeCallable GetSizeConstraintSetCallable(const GetSizeConstraintSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetSizeConstraintSet, request);
        }

        /**
         * An Async wrapper for GetSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSizeConstraintSetRequestT = Model::GetSizeConstraintSetRequest>
        void GetSizeConstraintSetAsync(const GetSizeConstraintSetRequestT& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetSizeConstraintSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>SqlInjectionMatchSet</a> that is specified by
         * <code>SqlInjectionMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSqlInjectionMatchSetOutcome GetSqlInjectionMatchSet(const Model::GetSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSqlInjectionMatchSetRequestT = Model::GetSqlInjectionMatchSetRequest>
        Model::GetSqlInjectionMatchSetOutcomeCallable GetSqlInjectionMatchSetCallable(const GetSqlInjectionMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetSqlInjectionMatchSet, request);
        }

        /**
         * An Async wrapper for GetSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSqlInjectionMatchSetRequestT = Model::GetSqlInjectionMatchSetRequest>
        void GetSqlInjectionMatchSetAsync(const GetSqlInjectionMatchSetRequestT& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetSqlInjectionMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the <a>WebACL</a>
         * that is specified by <code>WebACLId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetWebACL">AWS API
         * Reference</a></p>
         */
        virtual Model::GetWebACLOutcome GetWebACL(const Model::GetWebACLRequest& request) const;

        /**
         * A Callable wrapper for GetWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWebACLRequestT = Model::GetWebACLRequest>
        Model::GetWebACLOutcomeCallable GetWebACLCallable(const GetWebACLRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetWebACL, request);
        }

        /**
         * An Async wrapper for GetWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWebACLRequestT = Model::GetWebACLRequest>
        void GetWebACLAsync(const GetWebACLRequestT& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetWebACL, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns the
         * <a>XssMatchSet</a> that is specified by
         * <code>XssMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetXssMatchSetOutcome GetXssMatchSet(const Model::GetXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for GetXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetXssMatchSetRequestT = Model::GetXssMatchSetRequest>
        Model::GetXssMatchSetOutcomeCallable GetXssMatchSetCallable(const GetXssMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::GetXssMatchSet, request);
        }

        /**
         * An Async wrapper for GetXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetXssMatchSetRequestT = Model::GetXssMatchSetRequest>
        void GetXssMatchSetAsync(const GetXssMatchSetRequestT& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::GetXssMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>ActivatedRule</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListActivatedRulesInRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivatedRulesInRuleGroupOutcome ListActivatedRulesInRuleGroup(const Model::ListActivatedRulesInRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for ListActivatedRulesInRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListActivatedRulesInRuleGroupRequestT = Model::ListActivatedRulesInRuleGroupRequest>
        Model::ListActivatedRulesInRuleGroupOutcomeCallable ListActivatedRulesInRuleGroupCallable(const ListActivatedRulesInRuleGroupRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListActivatedRulesInRuleGroup, request);
        }

        /**
         * An Async wrapper for ListActivatedRulesInRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActivatedRulesInRuleGroupRequestT = Model::ListActivatedRulesInRuleGroupRequest>
        void ListActivatedRulesInRuleGroupAsync(const ListActivatedRulesInRuleGroupRequestT& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListActivatedRulesInRuleGroup, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>ByteMatchSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListByteMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListByteMatchSetsOutcome ListByteMatchSets(const Model::ListByteMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListByteMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListByteMatchSetsRequestT = Model::ListByteMatchSetsRequest>
        Model::ListByteMatchSetsOutcomeCallable ListByteMatchSetsCallable(const ListByteMatchSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListByteMatchSets, request);
        }

        /**
         * An Async wrapper for ListByteMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListByteMatchSetsRequestT = Model::ListByteMatchSetsRequest>
        void ListByteMatchSetsAsync(const ListByteMatchSetsRequestT& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListByteMatchSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>GeoMatchSetSummary</a> objects in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListGeoMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeoMatchSetsOutcome ListGeoMatchSets(const Model::ListGeoMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListGeoMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGeoMatchSetsRequestT = Model::ListGeoMatchSetsRequest>
        Model::ListGeoMatchSetsOutcomeCallable ListGeoMatchSetsCallable(const ListGeoMatchSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListGeoMatchSets, request);
        }

        /**
         * An Async wrapper for ListGeoMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGeoMatchSetsRequestT = Model::ListGeoMatchSetsRequest>
        void ListGeoMatchSetsAsync(const ListGeoMatchSetsRequestT& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListGeoMatchSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>IPSetSummary</a> objects in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListIPSets">AWS API
         * Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;

        /**
         * A Callable wrapper for ListIPSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIPSetsRequestT = Model::ListIPSetsRequest>
        Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const ListIPSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListIPSets, request);
        }

        /**
         * An Async wrapper for ListIPSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIPSetsRequestT = Model::ListIPSetsRequest>
        void ListIPSetsAsync(const ListIPSetsRequestT& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListIPSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>LoggingConfiguration</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggingConfigurationsOutcome ListLoggingConfigurations(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLoggingConfigurationsRequestT = Model::ListLoggingConfigurationsRequest>
        Model::ListLoggingConfigurationsOutcomeCallable ListLoggingConfigurationsCallable(const ListLoggingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListLoggingConfigurations, request);
        }

        /**
         * An Async wrapper for ListLoggingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLoggingConfigurationsRequestT = Model::ListLoggingConfigurationsRequest>
        void ListLoggingConfigurationsAsync(const ListLoggingConfigurationsRequestT& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListLoggingConfigurations, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListRateBasedRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRateBasedRulesOutcome ListRateBasedRules(const Model::ListRateBasedRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRateBasedRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRateBasedRulesRequestT = Model::ListRateBasedRulesRequest>
        Model::ListRateBasedRulesOutcomeCallable ListRateBasedRulesCallable(const ListRateBasedRulesRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListRateBasedRules, request);
        }

        /**
         * An Async wrapper for ListRateBasedRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRateBasedRulesRequestT = Model::ListRateBasedRulesRequest>
        void ListRateBasedRulesAsync(const ListRateBasedRulesRequestT& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListRateBasedRules, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RegexMatchSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListRegexMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexMatchSetsOutcome ListRegexMatchSets(const Model::ListRegexMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListRegexMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegexMatchSetsRequestT = Model::ListRegexMatchSetsRequest>
        Model::ListRegexMatchSetsOutcomeCallable ListRegexMatchSetsCallable(const ListRegexMatchSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListRegexMatchSets, request);
        }

        /**
         * An Async wrapper for ListRegexMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegexMatchSetsRequestT = Model::ListRegexMatchSetsRequest>
        void ListRegexMatchSetsAsync(const ListRegexMatchSetsRequestT& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListRegexMatchSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RegexPatternSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListRegexPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexPatternSetsOutcome ListRegexPatternSets(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * A Callable wrapper for ListRegexPatternSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegexPatternSetsRequestT = Model::ListRegexPatternSetsRequest>
        Model::ListRegexPatternSetsOutcomeCallable ListRegexPatternSetsCallable(const ListRegexPatternSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListRegexPatternSets, request);
        }

        /**
         * An Async wrapper for ListRegexPatternSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegexPatternSetsRequestT = Model::ListRegexPatternSetsRequest>
        void ListRegexPatternSetsAsync(const ListRegexPatternSetsRequestT& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListRegexPatternSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleGroup</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsOutcome ListRuleGroups(const Model::ListRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRuleGroupsRequestT = Model::ListRuleGroupsRequest>
        Model::ListRuleGroupsOutcomeCallable ListRuleGroupsCallable(const ListRuleGroupsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListRuleGroups, request);
        }

        /**
         * An Async wrapper for ListRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRuleGroupsRequestT = Model::ListRuleGroupsRequest>
        void ListRuleGroupsAsync(const ListRuleGroupsRequestT& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListRuleGroups, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListRules">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListRules, request);
        }

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        void ListRulesAsync(const ListRulesRequestT& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListRules, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>SizeConstraintSetSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListSizeConstraintSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSizeConstraintSetsOutcome ListSizeConstraintSets(const Model::ListSizeConstraintSetsRequest& request) const;

        /**
         * A Callable wrapper for ListSizeConstraintSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSizeConstraintSetsRequestT = Model::ListSizeConstraintSetsRequest>
        Model::ListSizeConstraintSetsOutcomeCallable ListSizeConstraintSetsCallable(const ListSizeConstraintSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListSizeConstraintSets, request);
        }

        /**
         * An Async wrapper for ListSizeConstraintSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSizeConstraintSetsRequestT = Model::ListSizeConstraintSetsRequest>
        void ListSizeConstraintSetsAsync(const ListSizeConstraintSetsRequestT& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListSizeConstraintSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>SqlInjectionMatchSet</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListSqlInjectionMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSqlInjectionMatchSetsOutcome ListSqlInjectionMatchSets(const Model::ListSqlInjectionMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListSqlInjectionMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSqlInjectionMatchSetsRequestT = Model::ListSqlInjectionMatchSetsRequest>
        Model::ListSqlInjectionMatchSetsOutcomeCallable ListSqlInjectionMatchSetsCallable(const ListSqlInjectionMatchSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListSqlInjectionMatchSets, request);
        }

        /**
         * An Async wrapper for ListSqlInjectionMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSqlInjectionMatchSetsRequestT = Model::ListSqlInjectionMatchSetsRequest>
        void ListSqlInjectionMatchSetsAsync(const ListSqlInjectionMatchSetsRequestT& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListSqlInjectionMatchSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>RuleGroup</a> objects that you are subscribed to.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListSubscribedRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribedRuleGroupsOutcome ListSubscribedRuleGroups(const Model::ListSubscribedRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscribedRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscribedRuleGroupsRequestT = Model::ListSubscribedRuleGroupsRequest>
        Model::ListSubscribedRuleGroupsOutcomeCallable ListSubscribedRuleGroupsCallable(const ListSubscribedRuleGroupsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListSubscribedRuleGroups, request);
        }

        /**
         * An Async wrapper for ListSubscribedRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscribedRuleGroupsRequestT = Model::ListSubscribedRuleGroupsRequest>
        void ListSubscribedRuleGroupsAsync(const ListSubscribedRuleGroupsRequestT& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListSubscribedRuleGroups, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Retrieves the tags
         * associated with the specified AWS resource. Tags are key:value pairs that you
         * can use to categorize and manage your resources, for purposes like billing. For
         * example, you might set the tag key to "customer" and the value to the customer
         * name or ID. You can specify one or more tags to add to each AWS resource, up to
         * 50 tags for a resource.</p> <p>Tagging is only available through the API, SDKs,
         * and CLI. You can't manage or view tags through the AWS WAF Classic console. You
         * can tag the AWS resources that you manage through AWS WAF Classic: web ACLs,
         * rule groups, and rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListTagsForResource, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>WebACLSummary</a> objects in the response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListWebACLs">AWS API
         * Reference</a></p>
         */
        virtual Model::ListWebACLsOutcome ListWebACLs(const Model::ListWebACLsRequest& request) const;

        /**
         * A Callable wrapper for ListWebACLs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWebACLsRequestT = Model::ListWebACLsRequest>
        Model::ListWebACLsOutcomeCallable ListWebACLsCallable(const ListWebACLsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListWebACLs, request);
        }

        /**
         * An Async wrapper for ListWebACLs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWebACLsRequestT = Model::ListWebACLsRequest>
        void ListWebACLsAsync(const ListWebACLsRequestT& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListWebACLs, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Returns an array of
         * <a>XssMatchSet</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ListXssMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListXssMatchSetsOutcome ListXssMatchSets(const Model::ListXssMatchSetsRequest& request) const;

        /**
         * A Callable wrapper for ListXssMatchSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListXssMatchSetsRequestT = Model::ListXssMatchSetsRequest>
        Model::ListXssMatchSetsOutcomeCallable ListXssMatchSetsCallable(const ListXssMatchSetsRequestT& request) const
        {
            return SubmitCallable(&WAFClient::ListXssMatchSets, request);
        }

        /**
         * An Async wrapper for ListXssMatchSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListXssMatchSetsRequestT = Model::ListXssMatchSetsRequest>
        void ListXssMatchSetsAsync(const ListXssMatchSetsRequestT& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::ListXssMatchSets, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Associates a
         * <a>LoggingConfiguration</a> with a specified web ACL.</p> <p>You can access
         * information about all traffic that AWS WAF inspects using the following
         * steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose. </p> <p>Create
         * the data firehose with a PUT source and in the region that you are operating.
         * However, if you are capturing logs for Amazon CloudFront, always create the
         * firehose in US East (N. Virginia). </p>  <p>Do not create the data
         * firehose using a <code>Kinesis stream</code> as your source.</p>  </li>
         * <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingConfigurationOutcome PutLoggingConfiguration(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLoggingConfigurationRequestT = Model::PutLoggingConfigurationRequest>
        Model::PutLoggingConfigurationOutcomeCallable PutLoggingConfigurationCallable(const PutLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&WAFClient::PutLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for PutLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLoggingConfigurationRequestT = Model::PutLoggingConfigurationRequest>
        void PutLoggingConfigurationAsync(const PutLoggingConfigurationRequestT& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::PutLoggingConfiguration, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Attaches an IAM policy to
         * the specified resource. The only supported use for this action is to share a
         * RuleGroup across accounts.</p> <p>The <code>PutPermissionPolicy</code> is
         * subject to the following restrictions:</p> <ul> <li> <p>You can attach only one
         * policy with each <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The
         * policy must include an <code>Effect</code>, <code>Action</code> and
         * <code>Principal</code>. </p> </li> <li> <p> <code>Effect</code> must specify
         * <code>Allow</code>.</p> </li> <li> <p>The <code>Action</code> in the policy must
         * be <code>waf:UpdateWebACL</code>, <code>waf-regional:UpdateWebACL</code>,
         * <code>waf:GetRuleGroup</code> and <code>waf-regional:GetRuleGroup</code> . Any
         * extra or wildcard actions in the policy will be rejected.</p> </li> <li> <p>The
         * policy cannot include a <code>Resource</code> parameter.</p> </li> <li> <p>The
         * ARN in the request must be a valid WAF RuleGroup ARN and the RuleGroup must
         * exist in the same region.</p> </li> <li> <p>The user making the request must be
         * the owner of the RuleGroup.</p> </li> <li> <p>Your policy must be composed using
         * IAM Policy version 2012-10-17.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
         * Policies</a>. </p> <p>An example of a valid policy parameter is shown in the
         * Examples section below.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/PutPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionPolicyOutcome PutPermissionPolicy(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPermissionPolicyRequestT = Model::PutPermissionPolicyRequest>
        Model::PutPermissionPolicyOutcomeCallable PutPermissionPolicyCallable(const PutPermissionPolicyRequestT& request) const
        {
            return SubmitCallable(&WAFClient::PutPermissionPolicy, request);
        }

        /**
         * An Async wrapper for PutPermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPermissionPolicyRequestT = Model::PutPermissionPolicyRequest>
        void PutPermissionPolicyAsync(const PutPermissionPolicyRequestT& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::PutPermissionPolicy, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Associates tags with the
         * specified AWS resource. Tags are key:value pairs that you can use to categorize
         * and manage your resources, for purposes like billing. For example, you might set
         * the tag key to "customer" and the value to the customer name or ID. You can
         * specify one or more tags to add to each AWS resource, up to 50 tags for a
         * resource.</p> <p>Tagging is only available through the API, SDKs, and CLI. You
         * can't manage or view tags through the AWS WAF Classic console. You can use this
         * action to tag the AWS resources that you manage through AWS WAF Classic: web
         * ACLs, rule groups, and rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&WAFClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::TagResource, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p/><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UntagResource, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>ByteMatchTuple</a> objects (filters) in a <a>ByteMatchSet</a>. For each
         * <code>ByteMatchTuple</code> object, you specify the following values: </p> <ul>
         * <li> <p>Whether to insert or delete the object from the array. If you want to
         * change a <code>ByteMatchSetUpdate</code> object, you delete the existing object
         * and add a new one.</p> </li> <li> <p>The part of a web request that you want AWS
         * WAF to inspect, such as a query string or the value of the
         * <code>User-Agent</code> header. </p> </li> <li> <p>The bytes (typically a string
         * that corresponds with ASCII characters) that you want AWS WAF to look for. For
         * more information, including how you specify the values for the AWS WAF API and
         * the AWS CLI or SDKs, see <code>TargetString</code> in the <a>ByteMatchTuple</a>
         * data type. </p> </li> <li> <p>Where to look, such as at the beginning or the end
         * of a query string.</p> </li> <li> <p>Whether to perform any conversions on the
         * request, such as converting it to lowercase, before inspecting it for the
         * specified string.</p> </li> </ul> <p>For example, you can add a
         * <code>ByteMatchSetUpdate</code> object that matches web requests in which
         * <code>User-Agent</code> headers contain the string <code>BadBot</code>. You can
         * then configure AWS WAF to block those requests.</p> <p>To create and configure a
         * <code>ByteMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Create
         * a <code>ByteMatchSet.</code> For more information, see
         * <a>CreateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <code>UpdateByteMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateByteMatchSet</code> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateByteMatchSetOutcome UpdateByteMatchSet(const Model::UpdateByteMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateByteMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateByteMatchSetRequestT = Model::UpdateByteMatchSetRequest>
        Model::UpdateByteMatchSetOutcomeCallable UpdateByteMatchSetCallable(const UpdateByteMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateByteMatchSet, request);
        }

        /**
         * An Async wrapper for UpdateByteMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateByteMatchSetRequestT = Model::UpdateByteMatchSetRequest>
        void UpdateByteMatchSetAsync(const UpdateByteMatchSetRequestT& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateByteMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>GeoMatchConstraint</a> objects in an <code>GeoMatchSet</code>. For each
         * <code>GeoMatchConstraint</code> object, you specify the following values: </p>
         * <ul> <li> <p>Whether to insert or delete the object from the array. If you want
         * to change an <code>GeoMatchConstraint</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The <code>Type</code>. The only
         * valid value for <code>Type</code> is <code>Country</code>.</p> </li> <li> <p>The
         * <code>Value</code>, which is a two character code for the country to add to the
         * <code>GeoMatchConstraint</code> object. Valid codes are listed in
         * <a>GeoMatchConstraint$Value</a>.</p> </li> </ul> <p>To create and configure an
         * <code>GeoMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateGeoMatchSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <a>UpdateGeoMatchSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateGeoMatchSet</code> request to specify the country that you want AWS
         * WAF to watch for.</p> </li> </ol> <p>When you update an
         * <code>GeoMatchSet</code>, you specify the country that you want to add and/or
         * the country that you want to delete. If you want to change a country, you delete
         * the existing country and add the new one.</p> <p>For more information about how
         * to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGeoMatchSetOutcome UpdateGeoMatchSet(const Model::UpdateGeoMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateGeoMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGeoMatchSetRequestT = Model::UpdateGeoMatchSetRequest>
        Model::UpdateGeoMatchSetOutcomeCallable UpdateGeoMatchSetCallable(const UpdateGeoMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateGeoMatchSet, request);
        }

        /**
         * An Async wrapper for UpdateGeoMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGeoMatchSetRequestT = Model::UpdateGeoMatchSetRequest>
        void UpdateGeoMatchSetAsync(const UpdateGeoMatchSetRequestT& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateGeoMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>IPSetDescriptor</a> objects in an <code>IPSet</code>. For each
         * <code>IPSetDescriptor</code> object, you specify the following values: </p> <ul>
         * <li> <p>Whether to insert or delete the object from the array. If you want to
         * change an <code>IPSetDescriptor</code> object, you delete the existing object
         * and add a new one.</p> </li> <li> <p>The IP address version, <code>IPv4</code>
         * or <code>IPv6</code>. </p> </li> <li> <p>The IP address in CIDR notation, for
         * example, <code>192.0.2.0/24</code> (for the range of IP addresses from
         * <code>192.0.2.0</code> to <code>192.0.2.255</code>) or
         * <code>192.0.2.44/32</code> (for the individual IP address
         * <code>192.0.2.44</code>). </p> </li> </ul> <p>AWS WAF supports IPv4 address
         * ranges: /8 and any range between /16 through /32. AWS WAF supports IPv6 address
         * ranges: /24, /32, /48, /56, /64, and /128. For more information about CIDR
         * notation, see the Wikipedia entry <a
         * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>.</p> <p>IPv6 addresses can be represented using any of
         * the following formats:</p> <ul> <li>
         * <p>1111:0000:0000:0000:0000:0000:0000:0111/128</p> </li> <li>
         * <p>1111:0:0:0:0:0:0:0111/128</p> </li> <li> <p>1111::0111/128</p> </li> <li>
         * <p>1111::111/128</p> </li> </ul> <p>You use an <code>IPSet</code> to specify
         * which web requests you want to allow or block based on the IP addresses that the
         * requests originated from. For example, if you're receiving a lot of requests
         * from one or a small number of IP addresses and you want to block the requests,
         * you can create an <code>IPSet</code> that specifies those IP addresses, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>IPSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateIPSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateIPSet</code> request to specify the IP addresses that you want AWS
         * WAF to watch for.</p> </li> </ol> <p>When you update an <code>IPSet</code>, you
         * specify the IP addresses that you want to add and/or the IP addresses that you
         * want to delete. If you want to change an IP address, you delete the existing IP
         * address and add the new one.</p> <p>You can insert a maximum of 1000 addresses
         * in a single request.</p> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateIPSet">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIPSetRequestT = Model::UpdateIPSetRequest>
        Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const UpdateIPSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateIPSet, request);
        }

        /**
         * An Async wrapper for UpdateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIPSetRequestT = Model::UpdateIPSetRequest>
        void UpdateIPSetAsync(const UpdateIPSetRequestT& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateIPSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>Predicate</a> objects in a rule and updates the <code>RateLimit</code> in the
         * rule. </p> <p>Each <code>Predicate</code> object identifies a predicate, such as
         * a <a>ByteMatchSet</a> or an <a>IPSet</a>, that specifies the web requests that
         * you want to block or count. The <code>RateLimit</code> specifies the number of
         * requests every five minutes that triggers the rule.</p> <p>If you add more than
         * one predicate to a <code>RateBasedRule</code>, a request must match all the
         * predicates and exceed the <code>RateLimit</code> to be counted or blocked. For
         * example, suppose you add the following to a <code>RateBasedRule</code>:</p> <ul>
         * <li> <p>An <code>IPSet</code> that matches the IP address
         * <code>192.0.2.44/32</code> </p> </li> <li> <p>A <code>ByteMatchSet</code> that
         * matches <code>BadBot</code> in the <code>User-Agent</code> header</p> </li>
         * </ul> <p>Further, you specify a <code>RateLimit</code> of 1,000.</p> <p>You then
         * add the <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you
         * want to block requests that satisfy the rule. For a request to be blocked, it
         * must come from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code>
         * header in the request must contain the value <code>BadBot</code>. Further,
         * requests that match these two conditions much be received at a rate of more than
         * 1,000 every five minutes. If the rate drops below this limit, AWS WAF no longer
         * blocks the requests.</p> <p>As a second example, suppose you want to limit
         * requests to a particular page on your site. To do this, you could add the
         * following to a <code>RateBasedRule</code>:</p> <ul> <li> <p>A
         * <code>ByteMatchSet</code> with <code>FieldToMatch</code> of <code>URI</code>
         * </p> </li> <li> <p>A <code>PositionalConstraint</code> of
         * <code>STARTS_WITH</code> </p> </li> <li> <p>A <code>TargetString</code> of
         * <code>login</code> </p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 1,000.</p> <p>By adding this
         * <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit requests to
         * your login page without affecting the rest of your site.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRateBasedRuleOutcome UpdateRateBasedRule(const Model::UpdateRateBasedRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRateBasedRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRateBasedRuleRequestT = Model::UpdateRateBasedRuleRequest>
        Model::UpdateRateBasedRuleOutcomeCallable UpdateRateBasedRuleCallable(const UpdateRateBasedRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateRateBasedRule, request);
        }

        /**
         * An Async wrapper for UpdateRateBasedRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRateBasedRuleRequestT = Model::UpdateRateBasedRuleRequest>
        void UpdateRateBasedRuleAsync(const UpdateRateBasedRuleRequestT& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateRateBasedRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>RegexMatchTuple</a> objects (filters) in a <a>RegexMatchSet</a>. For each
         * <code>RegexMatchSetUpdate</code> object, you specify the following values: </p>
         * <ul> <li> <p>Whether to insert or delete the object from the array. If you want
         * to change a <code>RegexMatchSetUpdate</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The part of a web request that you
         * want AWS WAF to inspectupdate, such as a query string or the value of the
         * <code>User-Agent</code> header. </p> </li> <li> <p>The identifier of the pattern
         * (a regular expression) that you want AWS WAF to look for. For more information,
         * see <a>RegexPatternSet</a>. </p> </li> <li> <p>Whether to perform any
         * conversions on the request, such as converting it to lowercase, before
         * inspecting it for the specified string.</p> </li> </ul> <p> For example, you can
         * create a <code>RegexPatternSet</code> that matches any requests with
         * <code>User-Agent</code> headers that contain the string
         * <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>RegexMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Create a <code>RegexMatchSet.</code> For
         * more information, see <a>CreateRegexMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexMatchSet</code> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the identifier of the <code>RegexPatternSet</code>
         * that contain the regular expression patters you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexMatchSetOutcome UpdateRegexMatchSet(const Model::UpdateRegexMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegexMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRegexMatchSetRequestT = Model::UpdateRegexMatchSetRequest>
        Model::UpdateRegexMatchSetOutcomeCallable UpdateRegexMatchSetCallable(const UpdateRegexMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateRegexMatchSet, request);
        }

        /**
         * An Async wrapper for UpdateRegexMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRegexMatchSetRequestT = Model::UpdateRegexMatchSetRequest>
        void UpdateRegexMatchSetAsync(const UpdateRegexMatchSetRequestT& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateRegexMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <code>RegexPatternString</code> objects in a <a>RegexPatternSet</a>. For each
         * <code>RegexPatternString</code> object, you specify the following values: </p>
         * <ul> <li> <p>Whether to insert or delete the
         * <code>RegexPatternString</code>.</p> </li> <li> <p>The regular expression
         * pattern that you want to insert or delete. For more information, see
         * <a>RegexPatternSet</a>. </p> </li> </ul> <p> For example, you can create a
         * <code>RegexPatternString</code> such as <code>B[a@]dB[o0]t</code>. AWS WAF will
         * match this <code>RegexPatternString</code> to:</p> <ul> <li> <p>BadBot</p> </li>
         * <li> <p>BadB0t</p> </li> <li> <p>B@dBot</p> </li> <li> <p>B@dB0t</p> </li> </ul>
         * <p>To create and configure a <code>RegexPatternSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Create a <code>RegexPatternSet.</code> For more
         * information, see <a>CreateRegexPatternSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexPatternSet</code> request
         * to specify the regular expression pattern that you want AWS WAF to watch
         * for.</p> </li> </ol> <p>For more information about how to use the AWS WAF API to
         * allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexPatternSetOutcome UpdateRegexPatternSet(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRegexPatternSetRequestT = Model::UpdateRegexPatternSetRequest>
        Model::UpdateRegexPatternSetOutcomeCallable UpdateRegexPatternSetCallable(const UpdateRegexPatternSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateRegexPatternSet, request);
        }

        /**
         * An Async wrapper for UpdateRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRegexPatternSetRequestT = Model::UpdateRegexPatternSetRequest>
        void UpdateRegexPatternSetAsync(const UpdateRegexPatternSetRequestT& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateRegexPatternSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>Predicate</a> objects in a <code>Rule</code>. Each <code>Predicate</code>
         * object identifies a predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>,
         * that specifies the web requests that you want to allow, block, or count. If you
         * add more than one predicate to a <code>Rule</code>, a request must match all of
         * the specifications to be allowed, blocked, or counted. For example, suppose that
         * you add the following to a <code>Rule</code>: </p> <ul> <li> <p>A
         * <code>ByteMatchSet</code> that matches the value <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> <li> <p>An <code>IPSet</code> that
         * matches the IP address <code>192.0.2.44</code> </p> </li> </ul> <p>You then add
         * the <code>Rule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that satisfy the <code>Rule</code>. For a request to be blocked,
         * the <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code> <i>and</i> the request must originate from the IP address
         * 192.0.2.44.</p> <p>To create and configure a <code>Rule</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the predicates that you want
         * to include in the <code>Rule</code>.</p> </li> <li> <p>Create the
         * <code>Rule</code>. See <a>CreateRule</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to add predicates to the
         * <code>Rule</code>.</p> </li> <li> <p>Create and update a <code>WebACL</code>
         * that contains the <code>Rule</code>. See <a>CreateWebACL</a>.</p> </li> </ol>
         * <p>If you want to replace one <code>ByteMatchSet</code> or <code>IPSet</code>
         * with another, you delete the existing one and add the new one.</p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateRule">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const UpdateRuleRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateRule, request);
        }

        /**
         * An Async wrapper for UpdateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        void UpdateRuleAsync(const UpdateRuleRequestT& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateRule, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>ActivatedRule</a> objects in a <code>RuleGroup</code>.</p> <p>You can only
         * insert <code>REGULAR</code> rules into a rule group.</p> <p>You can have a
         * maximum of ten rules per rule group.</p> <p>To create and configure a
         * <code>RuleGroup</code>, perform the following steps:</p> <ol> <li> <p>Create and
         * update the <code>Rules</code> that you want to include in the
         * <code>RuleGroup</code>. See <a>CreateRule</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRuleGroup</a> request.</p>
         * </li> <li> <p>Submit an <code>UpdateRuleGroup</code> request to add
         * <code>Rules</code> to the <code>RuleGroup</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RuleGroup</code>. See
         * <a>CreateWebACL</a>.</p> </li> </ol> <p>If you want to replace one
         * <code>Rule</code> with another, you delete the existing one and add the new
         * one.</p> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleGroupOutcome UpdateRuleGroup(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleGroupRequestT = Model::UpdateRuleGroupRequest>
        Model::UpdateRuleGroupOutcomeCallable UpdateRuleGroupCallable(const UpdateRuleGroupRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateRuleGroup, request);
        }

        /**
         * An Async wrapper for UpdateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleGroupRequestT = Model::UpdateRuleGroupRequest>
        void UpdateRuleGroupAsync(const UpdateRuleGroupRequestT& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateRuleGroup, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>SizeConstraint</a> objects (filters) in a <a>SizeConstraintSet</a>. For each
         * <code>SizeConstraint</code> object, you specify the following values: </p> <ul>
         * <li> <p>Whether to insert or delete the object from the array. If you want to
         * change a <code>SizeConstraintSetUpdate</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The part of a web request that you
         * want AWS WAF to evaluate, such as the length of a query string or the length of
         * the <code>User-Agent</code> header.</p> </li> <li> <p>Whether to perform any
         * transformations on the request, such as converting it to lowercase, before
         * checking its length. Note that transformations of the request body are not
         * supported because the AWS resource forwards only the first <code>8192</code>
         * bytes of your request to AWS WAF.</p> <p>You can only specify a single type of
         * TextTransformation.</p> </li> <li> <p>A <code>ComparisonOperator</code> used for
         * evaluating the selected part of the request against the specified
         * <code>Size</code>, such as equals, greater than, less than, and so on.</p> </li>
         * <li> <p>The length, in bytes, that you want AWS WAF to watch for in selected
         * part of the request. The length is computed after applying the
         * transformation.</p> </li> </ul> <p>For example, you can add a
         * <code>SizeConstraintSetUpdate</code> object that matches web requests in which
         * the length of the <code>User-Agent</code> header is greater than 100 bytes. You
         * can then configure AWS WAF to block those requests.</p> <p>To create and
         * configure a <code>SizeConstraintSet</code>, perform the following steps:</p>
         * <ol> <li> <p>Create a <code>SizeConstraintSet.</code> For more information, see
         * <a>CreateSizeConstraintSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateSizeConstraintSet</code> request to specify the part of the request
         * that you want AWS WAF to inspect (for example, the header or the URI) and the
         * value that you want AWS WAF to watch for.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSizeConstraintSetOutcome UpdateSizeConstraintSet(const Model::UpdateSizeConstraintSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateSizeConstraintSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSizeConstraintSetRequestT = Model::UpdateSizeConstraintSetRequest>
        Model::UpdateSizeConstraintSetOutcomeCallable UpdateSizeConstraintSetCallable(const UpdateSizeConstraintSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateSizeConstraintSet, request);
        }

        /**
         * An Async wrapper for UpdateSizeConstraintSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSizeConstraintSetRequestT = Model::UpdateSizeConstraintSetRequest>
        void UpdateSizeConstraintSetAsync(const UpdateSizeConstraintSetRequestT& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateSizeConstraintSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>SqlInjectionMatchTuple</a> objects (filters) in a
         * <a>SqlInjectionMatchSet</a>. For each <code>SqlInjectionMatchTuple</code>
         * object, you specify the following values:</p> <ul> <li> <p> <code>Action</code>:
         * Whether to insert the object into or delete the object from the array. To change
         * a <code>SqlInjectionMatchTuple</code>, you delete the existing object and add a
         * new one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests
         * that you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for snippets of malicious SQL
         * code.</p> <p>You can only specify a single type of TextTransformation.</p> </li>
         * </ul> <p>You use <code>SqlInjectionMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain snippets of SQL code in the query string
         * and you want to block the requests, you can create a
         * <code>SqlInjectionMatchSet</code> with the applicable settings, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Submit a <a>CreateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateSqlInjectionMatchSet</code> request to specify the
         * parts of web requests that you want AWS WAF to inspect for snippets of SQL
         * code.</p> </li> </ol> <p>For more information about how to use the AWS WAF API
         * to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSqlInjectionMatchSetOutcome UpdateSqlInjectionMatchSet(const Model::UpdateSqlInjectionMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateSqlInjectionMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSqlInjectionMatchSetRequestT = Model::UpdateSqlInjectionMatchSetRequest>
        Model::UpdateSqlInjectionMatchSetOutcomeCallable UpdateSqlInjectionMatchSetCallable(const UpdateSqlInjectionMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateSqlInjectionMatchSet, request);
        }

        /**
         * An Async wrapper for UpdateSqlInjectionMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSqlInjectionMatchSetRequestT = Model::UpdateSqlInjectionMatchSetRequest>
        void UpdateSqlInjectionMatchSetAsync(const UpdateSqlInjectionMatchSetRequestT& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateSqlInjectionMatchSet, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>ActivatedRule</a> objects in a <code>WebACL</code>. Each <code>Rule</code>
         * identifies web requests that you want to allow, block, or count. When you update
         * a <code>WebACL</code>, you specify the following values:</p> <ul> <li> <p>A
         * default action for the <code>WebACL</code>, either <code>ALLOW</code> or
         * <code>BLOCK</code>. AWS WAF performs the default action if a request doesn't
         * match the criteria in any of the <code>Rules</code> in a
         * <code>WebACL</code>.</p> </li> <li> <p>The <code>Rules</code> that you want to
         * add or delete. If you want to replace one <code>Rule</code> with another, you
         * delete the existing <code>Rule</code> and add the new one.</p> </li> <li> <p>For
         * each <code>Rule</code>, whether you want AWS WAF to allow requests, block
         * requests, or count requests that match the conditions in the
         * <code>Rule</code>.</p> </li> <li> <p>The order in which you want AWS WAF to
         * evaluate the <code>Rules</code> in a <code>WebACL</code>. If you add more than
         * one <code>Rule</code> to a <code>WebACL</code>, AWS WAF evaluates each request
         * against the <code>Rules</code> in order based on the value of
         * <code>Priority</code>. (The <code>Rule</code> that has the lowest value for
         * <code>Priority</code> is evaluated first.) When a web request matches all the
         * predicates (such as <code>ByteMatchSets</code> and <code>IPSets</code>) in a
         * <code>Rule</code>, AWS WAF immediately takes the corresponding action, allow or
         * block, and doesn't evaluate the request against the remaining <code>Rules</code>
         * in the <code>WebACL</code>, if any. </p> </li> </ul> <p>To create and configure
         * a <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Create and
         * update the predicates that you want to include in <code>Rules</code>. For more
         * information, see <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>,
         * <a>CreateIPSet</a>, <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li>
         * <p>Create a <code>WebACL</code>. See <a>CreateWebACL</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateWebACL</code> request to specify the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>, to
         * specify the default action, and to associate the <code>WebACL</code> with a
         * CloudFront distribution. </p> <p>The <code>ActivatedRule</code> can be a rule
         * group. If you specify a rule group as your <code>ActivatedRule</code> , you can
         * exclude specific rules from that rule group.</p> <p>If you already have a rule
         * group associated with a web ACL and want to submit an <code>UpdateWebACL</code>
         * request to exclude certain rules from that rule group, you must first remove the
         * rule group from the web ACL, the re-insert it again, specifying the excluded
         * rules. For details, see <a>ActivatedRule$ExcludedRules</a> . </p> </li> </ol>
         * <p>Be aware that if you try to add a RATE_BASED rule to a web ACL without
         * setting the rule type when first creating the rule, the <a>UpdateWebACL</a>
         * request will fail because the request tries to add a REGULAR rule (the default
         * rule type) with the specified ID, which does not exist. </p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebACLOutcome UpdateWebACL(const Model::UpdateWebACLRequest& request) const;

        /**
         * A Callable wrapper for UpdateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWebACLRequestT = Model::UpdateWebACLRequest>
        Model::UpdateWebACLOutcomeCallable UpdateWebACLCallable(const UpdateWebACLRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateWebACL, request);
        }

        /**
         * An Async wrapper for UpdateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWebACLRequestT = Model::UpdateWebACLRequest>
        void UpdateWebACLAsync(const UpdateWebACLRequestT& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateWebACL, request, handler, context);
        }

        /**
         *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
         * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
         * WAF</b>, use the AWS WAFV2 API and see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
         * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
         * endpoints for regional and global use. </p>  <p>Inserts or deletes
         * <a>XssMatchTuple</a> objects (filters) in an <a>XssMatchSet</a>. For each
         * <code>XssMatchTuple</code> object, you specify the following values:</p> <ul>
         * <li> <p> <code>Action</code>: Whether to insert the object into or delete the
         * object from the array. To change an <code>XssMatchTuple</code>, you delete the
         * existing object and add a new one.</p> </li> <li> <p> <code>FieldToMatch</code>:
         * The part of web requests that you want AWS WAF to inspect and, if you want AWS
         * WAF to inspect a header or custom query parameter, the name of the header or
         * parameter.</p> </li> <li> <p> <code>TextTransformation</code>: Which text
         * transformation, if any, to perform on the web request before inspecting the
         * request for cross-site scripting attacks.</p> <p>You can only specify a single
         * type of TextTransformation.</p> </li> </ul> <p>You use <code>XssMatchSet</code>
         * objects to specify which CloudFront requests that you want to allow, block, or
         * count. For example, if you're receiving requests that contain cross-site
         * scripting attacks in the request body and you want to block the requests, you
         * can create an <code>XssMatchSet</code> with the applicable settings, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>XssMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateXssMatchSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateXssMatchSet</code> request to specify the parts of web requests that
         * you want AWS WAF to inspect for cross-site scripting attacks.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/UpdateXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateXssMatchSetOutcome UpdateXssMatchSet(const Model::UpdateXssMatchSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateXssMatchSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateXssMatchSetRequestT = Model::UpdateXssMatchSetRequest>
        Model::UpdateXssMatchSetOutcomeCallable UpdateXssMatchSetCallable(const UpdateXssMatchSetRequestT& request) const
        {
            return SubmitCallable(&WAFClient::UpdateXssMatchSet, request);
        }

        /**
         * An Async wrapper for UpdateXssMatchSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateXssMatchSetRequestT = Model::UpdateXssMatchSetRequest>
        void UpdateXssMatchSetAsync(const UpdateXssMatchSetRequestT& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WAFClient::UpdateXssMatchSet, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WAFEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WAFClient>;
      void init(const WAFClientConfiguration& clientConfiguration);

      WAFClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WAFEndpointProviderBase> m_endpointProvider;
  };

} // namespace WAF
} // namespace Aws
